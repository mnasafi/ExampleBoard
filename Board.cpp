#include "Board.h"


void Board::setSize(int row, int column)  // retrieves this function from Board.h class file
{
    grid.resize(row);
    for(int i=0; i<grid.size(); i++)
    {
        grid[i].resize(column);

    }



} // end setSize()
