#ifndef _BOARD_H_
#define _BOARD_H_

#include <vector>

// using namespace std; -- don't use because forces all files to use std, might not be desirable


class Board
{
    private:
        std::vector < vector<char> > grid;


    public:
        void setSize(int,int);
        void fillWith(char);
        void assign(char, int, int);
        char get(int, int);




}; // end class -- don't forget semi-colon



#endif // End of ifndef _BOARD_H_


// never directly compile this class file. Only interface for our program.
// No need to specify paramater names, just data type for functions. 
