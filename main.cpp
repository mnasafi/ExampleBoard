#include <iostream>
#include "Board.h"


using namespace std;

int main()
{
    Board ticTacToe;

    ticTacToe.setSize(3,3);
    ticTacToe.fillWith('X');

    cout << "Grid at row 2, column 1: " << ticTacToe.get(2,1) << endl;

    ticTacToe.printAll();

    cout << "Grid at 0,0: " << ticTacToe.get(0,0) << endl;


    return 0;
} // end main()
