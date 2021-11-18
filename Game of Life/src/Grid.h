#pragma once

namespace GameOfLife {

	struct Coordinate {
		const uint32_t x, y;
		Coordinate operator+(const Coordinate& other)
		{
			return { x + other.x, y + other.y };
		}
	};

	class Grid
	{
	public:
		Grid(uint32_t width, uint32_t height);
		Grid(uint32_t square);
		~Grid();

		const int GetArea() const;
		const bool CellState(const Coordinate& const point) const;
		const bool CellState(uint32_t index) const;

		const int IndexFromCoordinate(const Coordinate& const point) const;
		Coordinate CoordinateFromIndex(uint32_t index) const;
		const bool IsInBounds(const Coordinate& const point) const;
		const bool IsInBounds(uint32_t index) const;
		const void ToggleCell(const Coordinate& const point) const;
		const void ToggleCell(uint32_t index) const;

		const void Print() const;

	private:
		int m_Width, m_Height;
		int m_Area;
		bool* const m_Cells;
	};

}
