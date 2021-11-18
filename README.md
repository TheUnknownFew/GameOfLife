
# Conway's Game of Life

> The Game of Life, also known simply as Life, is a cellular automaton devised by the British mathematician John Horton Conway in 1970.[1] It is a zero-player game, meaning that its evolution is determined by its initial state, requiring no further input. One interacts with the Game of Life by creating an initial configuration and observing how it evolves. It is Turing complete and can simulate a universal constructor or any other Turing machine.

~ [Conway's Game of Life - Wikipedia](https://en.wikipedia.org/wiki/Conway%27s_Game_of_Life)

---

## About

Welcome to my project. This is a self-assigned excersie where I have/am going to develope Conway's Game of Life in stages starting with a simple implementation and the working up to a more advanced, graphical implementation.

For this project, I have specific goals I want to achieve such as learning how to implement a rendering API. I feel that Conway's Game of Life is simple enough that I can spend more time focusing on learning goals rather than mulling over specific design details.

## State of the Project

The project currently implements a finite grid with manual function calls to set the initial state of the grid. Additionally, the project only functions through a console window with an ascii representation of the grid implementation.

## Goals

> Learning a rendering API

For this project, I want learn to implement some sort of rendering API such as OpenGL or DirectX. The specific API has not been decided upon at this time.

> Creating a build system

I plan on learning how to build a project using Premake.

> Exploring different implementations and methodologies

As I am starting from a simple implementation and working up to a more advanced implementation, I want to go over existing code and either re-implemennt it differently or optimize it. At the end of the day, I want to be able to compare and contrast code that I have made that does exactly the same thing, but implemented in drastically different manenrs.

---

## Roadmap

The following are what I intend on implementing.

```plaintext
✅ Make a console demo.
📌 Choose a GUI API amd Implement a GUI application.
📌 Setup Premake.
📌 Implement a pseudo-infinite grid.
    📌 Horizontal and vertical scrolling across the grid.
    📌 Zooming in and out of the grid.
📌 Draw custom shapes on the grid.
📌 Import and Export grid states.
📌 Custom time steps.
    📌 Pause the game.
    📌 Slow down or speed up the game.
```

## Ideas

These are ideas I thought of, but might not get to.

```plaintext
📌 Toggle from a 2D to 3D grid and have Conway's game of Life work in 3D.
📌 Implement a continuous version of the Game of Life (i.e. not binary).
📌 Explore behavior of introducing my own rules to the Game of Life.
```

---

## Project Details & Setup

Developed on Windows 11 in Visual Studio using C++17

(More project details will be added here as things get added to it)
