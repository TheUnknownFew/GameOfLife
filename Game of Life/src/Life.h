#pragma once
#include <iostream>
#include "Grid.h"

namespace GameOfLife {

	namespace Demo {

		int CountAliveNeighbors(uint32_t i_Cell, Grid& const grid);
		void Epoch(const Grid& const grid);
		void Run();

	}

	int CountAliveNeighbors();
	void Epoch();
	void Run();

}
