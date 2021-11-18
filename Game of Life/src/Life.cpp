#include <iostream>
#include <vector>
#include "Life.h"
#include "Grid.h"


namespace GameOfLife {
	namespace Demo {

		const Coordinate neighbors[] = {
			{-1, -1}, {0, -1}, {1, -1},
			{-1,  0},          {1,  0},
			{-1,  1}, {0,  1}, {1,  1}
		};

		int CountAliveNeighbors(uint32_t i_Cell, const Grid& const grid)
		{
			int count = 0;
			for (const Coordinate& const point : neighbors)
			{
				Coordinate neighbor = grid.CoordinateFromIndex(i_Cell) + point;
				if (!grid.IsInBounds(neighbor))
					continue;
				if (grid.CellState(neighbor))
					count++;
			}
			return count;
		}

		// Runs for each generation.
		void Epoch(const Grid& const grid)
		{
			std::vector<int> toggleCells;
			for (int i_Cell = 0; i_Cell < grid.GetArea(); i_Cell++)
			{
				int aliveNeighbors = CountAliveNeighbors(i_Cell, grid);
				bool isAlive = grid.CellState(i_Cell);

				if (isAlive && (aliveNeighbors == 2 || aliveNeighbors == 3))
					continue;

				if (!isAlive && aliveNeighbors == 3)
				{
					toggleCells.push_back(i_Cell);
					continue;
				}

				if (isAlive)
					toggleCells.push_back(i_Cell);
			}

			for (int cell : toggleCells)
				grid.ToggleCell(cell);
		}

		// Demonstration of Conway's Game of Live via the Console:
		// The intention of this code is not to be a final product, but to act as a pathway
		// for future development of a GUI application.
		// This code is temporary.
		void Run()
		{
			Grid grid(50);

			Coordinate enabled[] = { {3, 1}, {1, 2}, {3, 2}, {2, 3}, {3, 3} };
			for (const Coordinate& i : enabled)
			{
				grid.ToggleCell(i);
			}


			while (true)
			{
				grid.Print();
				std::cin.get();
				Epoch(grid);
				std::system("cls");
			}
		}

	}

	int CountAliveNeighbors()
	{
		return 0;
	}

	void Epoch()
	{
	}

	void Run()
	{
	}
}
