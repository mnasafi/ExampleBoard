#include "Board.h"
#include <iostream>

// using namespace std;

/*

   Board::Board()
   {



   }

*/


void Board::setSize(int row, int column)  // retrieves this function from Board.h class file
{
    grid.resize(row);  // grid vector declared private in board.h class file

    for(int i = 0; i < grid.size(); i++)
    {
        grid[i].resize(column);

    }



} // end setSize()


void Board::fillWith(char value)
{
    for(int row = 0; row < grid.size(); row++)
    {
        for(int column = 0; column < grid[row].size(); column++)
        {
            grid[row][column] = value;

        }

    }


} // end fillWith()


char Board::get(int row, int column)
{
    std::cout << grid[row][column] << std::endl;


} // end get()


char Board::printAll()
{
    for (int row = 0; row < grid.size(); row++)
    {
        for (int column = 0; column < grid[row].size(); column++)
        {
           std::cout << grid[row][column] << std::endl;

        }

    }

} // end printAll()


