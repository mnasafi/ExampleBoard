#include "Board.h"


void Board::setSize(int row, int column)  // retrieves this function from Board.h class file
{
    grid.resize(row);
    for(int i=0; i<grid.size(); i++)
    {
        grid[i].resize(column);

    }



} // end setSize()


void Board::fillWith(char value)
{
    for(int row=0; row<grid.size(); row++)
    {
        for(int column =0; column<grid[row].size(); column++)
        {
            grid[row][column] = value;

        }

    }


} // end fillWith()
