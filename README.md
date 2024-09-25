# alx-maze_project
This is a Maze project for the ALX Software Engineering program.

# **Maze project**

## Background Context.

The goal of this project is to create a game in 3D using raycasting !

```markdown
# Maze Project

## Description
This project is aimed at creating a simple maze-like game using SDL2 and raycasting techniques. The game enables players to navigate a 3D environment while implementing several functionalities, including camera movement, wall rendering, collision detection, and more.

## Tasks Overview

### 0. Walls
- Create a window using SDL2.
- Implement raycasting to draw walls, with distinguishable colors between walls and the ground/ceiling.
- Provide a method to modify the map directly in the code (using an array).

### 1. Orientation
- Differentiate wall colors based on their orientation (NORTH/SOUTH vs EAST/WEST).

### 2. Rotation
- Allow camera rotation during execution using keyboard input (arrow keys or mouse movement).

### 3. Move
- Implement movement controls for the camera using the W, A, S, D keys.

### 4. Ouch!
- Handle collisions between the player (camera) and walls. 
- Implement sliding against walls instead of stopping abruptly.

### 5. Parser
- Create a parser to read the map structure from a file, defining custom characters for walls and empty spaces.

### 6. Draw the Map
- Provide functionality to draw the map within the window, allowing for customization and toggling visibility during gameplay.

### 7. Coding Style + Documentation
- Ensure code adheres to the Holberton School coding style and includes proper documentation as per guidelines.

### 8. Textures
- Integrate textures for walls to enhance visual appeal.

### 9. Multi-task!
- Enhance movement and rotation controls to enable simultaneous actions (e.g., walking diagonally).

### 10. Ground Textures
- Add textures for the ground and ceiling for improved aesthetics.

### 11. Weapons
- Implement textures for weapons within the game.

### 12. Enemies
- Introduce enemies to interact with the player, inspired by classic games such as Wolfenstein 3D.

### 13. Make it Rain
- Add a rain effect with the option to start/stop it using a designated key.

### 14. Extra Options
- Explore creative enhancements like shadows, special lighting effects, etc.

## Getting Started

### Prerequisites
- Install [SDL2](https://www.libsdl.org/) library.
- Development environment capable of compiling C code.

### Installation
1. Clone this repository:
   ```bash
   git clone <repository-url>
   cd maze-project
   ```
2. Build the project:
   ```bash
   make
   ```

3. Run the project:
   ```bash
   ./maze
   ```

## Usage
- Use the W, A, S, D keys for navigation.
- Use arrow keys or mouse movement for camera rotation.
- Press designated keys to toggle rain and other features as implemented.

