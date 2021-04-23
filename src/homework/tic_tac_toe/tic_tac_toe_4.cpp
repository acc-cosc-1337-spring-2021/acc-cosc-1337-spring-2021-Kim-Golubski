#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/
bool  TicTacToe4::check_column_win()
{
    if (pegs[0]=="X" && pegs[4]=="X" && pegs[8]=="X" && pegs[12]=="X")
    {
        return true;
    }
    else if (pegs[0]=="O" && pegs[4]=="O" && pegs[8]=="O" && pegs[12]=="O")
    {
        return true;
    }
    else if (pegs[1]=="X" && pegs[5]=="X" && pegs[9]=="X" && pegs[13]=="X")
    {
        return true;
    }
    else if (pegs[1]=="O" && pegs[5]=="O" && pegs[9]=="O" && pegs[13]=="O")
    {
        return true;
    }
    else if (pegs[2]=="X" && pegs[6]=="X" && pegs[10]=="X" && pegs[14]=="X")
    {
        return true;
    }
    else if (pegs[2]=="O" && pegs[6]=="O" && pegs[10]=="O" && pegs[14]=="O")
    {
        return true;
    }
    else if (pegs[3]=="X" && pegs[7]=="X" && pegs[11]=="X" && pegs[15]=="X")
    {
        return true;
    }
    else if (pegs[3]=="O" && pegs[7]=="O" && pegs[11]=="O" && pegs[15]=="O")
    {
        return true;
    }
    return false;
}


/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/
bool TicTacToe4::check_row_win()
{
    
    
    if ((pegs[0] == pegs[1]) && (pegs[1] == pegs[2]) && (pegs[2] == pegs[3]))
    {
        if (pegs[0] != " ")
        {
            return true;
        }
    }
    else if ((pegs[4] == pegs[5]) && (pegs[5] == pegs[6]) && (pegs[6] == pegs[7]))
    {
        if (pegs[4] == " ")
        {
            return true;
        }
    }
    else if ((pegs[8] == pegs[9]) && (pegs[9] == pegs[10]) && (pegs[10] == pegs[11]))
    {
        if (pegs[8] != " ")
        {
            return true;
        }
    }
    else if ((pegs[12] == pegs[13]) && (pegs[13] == pegs[14]) && (pegs[14] == pegs[15]))
    {
        if (pegs[12] != " ")
        {
            return true;
        }
    }
    return false;    
}


/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/
bool TicTacToe4::check_diagonal_win()
{
    if ((pegs[0] == pegs[5]) && (pegs[5] == pegs[10]) && (pegs[10] == pegs[15]))
    {
        if (pegs[0] != " ")
        {
            return true;
        }
    }
    else if ((pegs[3] == pegs[6]) && (pegs[6] == pegs[9]) && (pegs[9] == pegs[12]))
    {
        if (pegs[3] != " ")
        {
            return true;
        }
    }
    return false;
}