//cpp
#include "tic_tac_toe.h"


bool TicTacToe::game_over()
{
    if (check_column_win() == true)
    {
        set_winner();
    }
    if (check_row_win() == true)
    {
        set_winner();
    }
    if (check_diagonal_win() == true)
    {
        set_winner();
    }
    if (check_board_full() == true)
    {
        winner = "C";
        return true;
    }  
    return false;
}
void TicTacToe::start_game(string first_player)
{
    first_player == "X" || first_player =="O";
    player = first_player;
    clear_board();

}
void TicTacToe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}
string TicTacToe::get_player()const
{
    return player;
}
void TicTacToe::display_board()const
{
    cout<<pegs[0]<<"|"<<pegs[1]<<"|"<<pegs[2]<<"\n";
    cout<<pegs[3]<<"|"<<pegs[4]<<"|"<<pegs[5]<<"\n";
    cout<<pegs[6]<<"|"<<pegs[7]<<"|"<<pegs[8]<<"\n";

}
string TicTacToe::get_winner()
{
    return winner;
}


void TicTacToe::set_next_player()
{
    if (player == "O")
    {
        player = "X";
    }
    else (player = "O");
}
bool TicTacToe::check_board_full()
{
    for (string n : pegs)
    {
        if (n == " ")
        {
            return false;
        }  
    }
    return true; 
}
void TicTacToe::clear_board()
{
    for (string& n : pegs)
        {
            n = " ";
        }
}
bool  TicTacToe::check_column_win()
{
    
    if ((pegs[0] == pegs[3]) && (pegs[0] == pegs[6]) && (pegs[3] == pegs[6]) && (!(pegs[0] == " ")))
    {
        return true;
    }
    if ((pegs[1] == pegs[4]) && (pegs[1] == pegs[7]) && (pegs[4] == pegs[7]) && (!(pegs[1] == " ")))
    {
        return true;
    }
    if ((pegs[2] == pegs[5]) && (pegs[2] == pegs[7]) && (pegs[5] == pegs[7]) && (!(pegs[2] == " ")))
    {
        return true;
    }
    
    return false;    
}
bool TicTacToe::check_row_win()
{
    
    if (pegs[0] == pegs[1] && pegs[1] == pegs[2])
    {
        if (pegs[0] != " ")
        {
            return true;
        }
    }
    if (pegs[3] == pegs[4] && pegs[4] == pegs[5])
    {
        if(pegs[3] != " ")
        {
            return true;
        }
    }
    if (pegs[6] == pegs[7] && pegs[7] == pegs[8])
    {
        if(pegs[6] != " ")
        {
            return true;
        }
    }
    return false;
}
bool TicTacToe::check_diagonal_win()
{
    if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
    {
        return true;
    }
    if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
    {
        return true;
    }
    if (pegs[2] == "X" && pegs[4] == "X" && pegs[6] =="X")
    {
        return true;
    }
    if (pegs[2] == "O" && pegs[4] == "O" && pegs[6] =="O")
    {
        return true;
    }
    return false;
}
void TicTacToe::set_winner()
{
    if (player == "X")
    {
        winner = "X";
    }
    else (winner = "O");    
}