#include <iostream>
#include "Grid.h"

namespace GameOfLife {

	Grid::Grid(uint32_t width, uint32_t height) : m_Width(width), m_Height(height), m_Area(width * height), m_Cells(new bool[m_Area])
	{
		std::fill_n(m_Cells, m_Area, false);
	}

	Grid::Grid(uint32_t square) : m_Width(square), m_Height(square), m_Area(square * square), m_Cells(new bool[m_Area])
	{
		std::fill_n(m_Cells, m_Area, false);
	}

	Grid::~Grid()
	{
		delete[] m_Cells;
	}

	// Returns the total area of the grid.
	const int Grid::GetArea() const
	{
		return m_Area;
	}

	const bool Grid::CellState(const Coordinate& const point) const
	{
		return CellState(IndexFromCoordinate(point));
	}

	// Returns the state of a cell at a given index.
	const bool Grid::CellState(uint32_t index) const
	{
		return m_Cells[index];
	}

	// Returns the index of a cell from its coordinates.
	const int Grid::IndexFromCoordinate(const Coordinate& const point) const
	{
		return point.y * m_Width + point.x;
	}

	// Returns the coordinate at which the index is at.
	Coordinate Grid::CoordinateFromIndex(uint32_t index) const
	{
		uint32_t x = index % m_Width;
		uint32_t y = (index - x) / m_Width;
		return {x, y};
	}

	const bool Grid::IsInBounds(const Coordinate& const point) const
	{
		return IsInBounds(IndexFromCoordinate(point));
	}

	// Checks to see if the passed index is within the grid.
	const bool Grid::IsInBounds(uint32_t index) const
	{
		return index >= 0 && index < m_Area;
	}

	const void Grid::ToggleCell(const Coordinate& const point) const
	{
		ToggleCell(IndexFromCoordinate(point));
	}

	// Toggles the cell at a given index within the grid.
	const void Grid::ToggleCell(uint32_t index) const
	{
		m_Cells[index] = !m_Cells[index];
	}

	// Prints the grid.
	// o - cell is enabled
	// x - cell is disabled
	const void Grid::Print() const
	{
		for (int i = 0; i < m_Area; i++)
		{
			if (i % m_Width == 0)
				std::cout << std::endl;
			std::cout << (m_Cells[i] ? "o" : " ") << " ";
		}
	}

}
