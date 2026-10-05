import pygame
import math

# ------------------------------------------------------------
# Simple Raycasting Demo
# Based on the basic idea from the LodeV raycasting tutorial.
#
# Controls:
#   W / S       Move forward / backward
#   A / D       Turn left / right
#   Arrow keys  Same movement controls
#   ESC         Quit
# ------------------------------------------------------------

pygame.init()

# Window size
WIDTH = 960
HEIGHT = 540

screen = pygame.display.set_mode((WIDTH, HEIGHT))
pygame.display.set_caption("Simple Raycasting Demo")

clock = pygame.time.Clock()

# ------------------------------------------------------------
# 2D MAP
#
# 0 = empty space
# 1 = wall
# 2 = different wall type
# 3 = another wall type
# ------------------------------------------------------------

WORLD_MAP = [
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
    [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1],
    [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1],
    [1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1],
    [1, 0, 0, 0, 0, 1, 0, 0, 0, 2, 0, 1],
    [1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1],
    [1, 0, 0, 0, 0, 1, 0, 1, 1, 1, 0, 1],
    [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1],
    [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1],
    [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1],
    [1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1],
    [1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1],
]

MAP_H = len(WORLD_MAP)
MAP_W = len(WORLD_MAP[0])

# ------------------------------------------------------------
# Player
# ------------------------------------------------------------

player_x = 3.5
player_y = 5.5

# Looking direction
player_angle = 0.0

MOVE_SPEED = 3.0
ROT_SPEED = 2.0

# Field of view
FOV = math.radians(60)

# ------------------------------------------------------------
# Raycasting
# ------------------------------------------------------------

def cast_ray(ray_angle):
    """
    Cast one ray from the player.

    We use a simple small-step traversal here so the
    basic raycasting idea is easy to understand.

    Later, this can be replaced with DDA exactly as
    used in the LodeV tutorial.
    """

    # Direction of this ray
    ray_dx = math.cos(ray_angle)
    ray_dy = math.sin(ray_angle)

    # Start at player
    distance = 0.0

    # Small movement along the ray
    step = 0.02

    while distance < 30:
        ray_x = player_x + ray_dx * distance
        ray_y = player_y + ray_dy * distance

        map_x = int(ray_x)
        map_y = int(ray_y)

        # Outside map = wall
        if (
            map_x < 0 or map_x >= MAP_W or
            map_y < 0 or map_y >= MAP_H
        ):
            return distance, 1

        # Check whether ray entered a wall square
        cell = WORLD_MAP[map_y][map_x]

        if cell != 0:
            return distance, cell

        distance += step

    return 30, 1


# ------------------------------------------------------------
# Draw 3D view
# ------------------------------------------------------------

def draw_3d_view():
    # Ceiling
    screen.fill((40, 40, 60))

    # Floor
    pygame.draw.rect(
        screen,
        (80, 80, 80),
        (0, HEIGHT // 2, WIDTH, HEIGHT // 2)
    )

    # One ray for every screen x-coordinate.
    #
    # Example:
    # WIDTH = 960
    # -> approximately 960 rays
    #
    # Each ray produces one vertical wall slice.

    for x in range(WIDTH):

        # Convert screen x into an angle relative to
        # the center of the screen.
        camera_x = (2.0 * x / WIDTH) - 1.0

        ray_angle = (
            player_angle +
            math.atan(camera_x * math.tan(FOV / 2))
        )

        # Shoot the ray
        distance, wall_type = cast_ray(ray_angle)

        # ----------------------------------------------------
        # Fish-eye correction
        #
        # Rays near the edge of the screen travel diagonally.
        # Correcting by the angle makes walls look straight.
        # ----------------------------------------------------

        angle_difference = ray_angle - player_angle

        corrected_distance = (
            distance * math.cos(angle_difference)
        )

        corrected_distance = max(corrected_distance, 0.001)

        # ----------------------------------------------------
        # Perspective:
        #
        # close wall  -> large wall
        # far wall    -> small wall
        # ----------------------------------------------------

        wall_height = int(
            HEIGHT / corrected_distance
        )

        wall_height = min(wall_height, HEIGHT * 2)

        top = HEIGHT // 2 - wall_height // 2
        bottom = HEIGHT // 2 + wall_height // 2

        # Different wall types
        if wall_type == 1:
            color = (180, 180, 180)
        elif wall_type == 2:
            color = (180, 80, 80)
        else:
            color = (80, 180, 80)

        # Draw one vertical wall slice
        pygame.draw.line(
            screen,
            color,
            (x, top),
            (x, bottom),
            1
        )


# ------------------------------------------------------------
# Optional: draw a small top-down map in the corner
# ------------------------------------------------------------

def draw_minimap():
    scale = 12
    offset_x = 10
    offset_y = 10

    for y in range(MAP_H):
        for x in range(MAP_W):

            cell = WORLD_MAP[y][x]

            if cell == 0:
                color = (30, 30, 30)
            elif cell == 1:
                color = (180, 180, 180)
            elif cell == 2:
                color = (180, 80, 80)
            else:
                color = (80, 180, 80)

            pygame.draw.rect(
                screen,
                color,
                (
                    offset_x + x * scale,
                    offset_y + y * scale,
                    scale - 1,
                    scale - 1
                )
            )

    # Player position
    px = offset_x + int(player_x * scale)
    py = offset_y + int(player_y * scale)

    pygame.draw.circle(
        screen,
        (255, 255, 0),
        (px, py),
        4
    )

    # Player direction
    dx = math.cos(player_angle) * 10
    dy = math.sin(player_angle) * 10

    pygame.draw.line(
        screen,
        (255, 255, 0),
        (px, py),
        (px + dx, py + dy),
        2
    )


# ------------------------------------------------------------
# Main loop
# ------------------------------------------------------------

running = True

while running:

    # Time since previous frame
    dt = clock.tick(60) / 1000.0

    # --------------------------------------------------------
    # Keyboard / window events
    # --------------------------------------------------------

    for event in pygame.event.get():

        if event.type == pygame.QUIT:
            running = False

        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_ESCAPE:
                running = False

    keys = pygame.key.get_pressed()

    # --------------------------------------------------------
    # Rotation
    # --------------------------------------------------------

    if keys[pygame.K_LEFT] or keys[pygame.K_a]:
        player_angle -= ROT_SPEED * dt

    if keys[pygame.K_RIGHT] or keys[pygame.K_d]:
        player_angle += ROT_SPEED * dt

    # --------------------------------------------------------
    # Movement
    # --------------------------------------------------------

    move_x = 0
    move_y = 0

    if keys[pygame.K_w] or keys[pygame.K_UP]:
        move_x += math.cos(player_angle) * MOVE_SPEED * dt
        move_y += math.sin(player_angle) * MOVE_SPEED * dt

    if keys[pygame.K_s] or keys[pygame.K_DOWN]:
        move_x -= math.cos(player_angle) * MOVE_SPEED * dt
        move_y -= math.sin(player_angle) * MOVE_SPEED * dt

    # --------------------------------------------------------
    # Collision detection
    # --------------------------------------------------------

    new_x = player_x + move_x
    new_y = player_y + move_y

    # Check X movement separately
    if WORLD_MAP[int(player_y)][int(new_x)] == 0:
        player_x = new_x

    # Check Y movement separately
    if WORLD_MAP[int(new_y)][int(player_x)] == 0:
        player_y = new_y

    # --------------------------------------------------------
    # Render
    # --------------------------------------------------------

    draw_3d_view()
    draw_minimap()

    # FPS / controls text
    font = pygame.font.SysFont(None, 22)

    text = font.render(
        "W/S: move   A/D or arrows: turn   ESC: quit",
        True,
        (255, 255, 255)
    )

    screen.blit(text, (10, HEIGHT - 30))

    pygame.display.flip()


pygame.quit()
