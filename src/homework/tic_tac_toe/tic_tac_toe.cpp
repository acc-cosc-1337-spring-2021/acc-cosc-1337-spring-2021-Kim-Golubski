//cpp
#include "tic_tac_toe.h"

std::istream& operator>>(std::istream& in, TicTacToe& game)
{
    int position;
    cout<<"Choose 1-9 for your board position: ";
	cin>>position;
    game.mark_board(position);
    return in;
}
std::ostream& operator<<(std::ostream& out, const TicTacToe& game)
{
    out<<game.pegs[0]<<"|"<<game.pegs[1]<<"|"<<game.pegs[2]<<"\n";
    out<<game.pegs[3]<<"|"<<game.pegs[4]<<"|"<<game.pegs[5]<<"\n";
    out<<game.pegs[6]<<"|"<<game.pegs[7]<<"|"<<game.pegs[8]<<"\n";
    return out;
}

bool TicTacToe::game_over()
{
    if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    if (check_row_win() == true)
    {
        set_winner();
        return true;
    }
    if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
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
    if (game_over() == false)
    {
        set_next_player();
    }
    
}
string TicTacToe::get_player()const
{
    return player;
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
    
    if ((pegs[0] == pegs[3]) && (pegs[3] == pegs[6]))
    {
        if (pegs[0] != " ")
        {
            return true;
        }
    }
    else if ((pegs[1] == pegs[4]) && (pegs[4] == pegs[7]))
    {
        if (pegs[1] != " ")
        {
            return true;
        }
    }
    if ((pegs[2] == pegs[5]) && (pegs[5] == pegs[8]))
    {
        if (pegs[2] != " ")
        {
            return true;
        }
    }
    return false;    
}
bool TicTacToe::check_row_win()
{
    
    if ((pegs[0] == pegs[1]) && (pegs[1] == pegs[2]))
    {
        if (pegs[0] != " ")
        {
            return true;
        }
    }
    else if ((pegs[3] == pegs[4]) && (pegs[4] == pegs[5]))
    {
        if(pegs[3] != " ")
        {
            return true;
        }
    }
    else if ((pegs[6] == pegs[7]) && (pegs[7] == pegs[8]))
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
    if ((pegs[0] == pegs[4]) && (pegs[4] == pegs[8]))
    {
        if (pegs[0] != " ")
        {
            return true;
        }
    }
    else if ((pegs[2] == pegs[4]) && (pegs[4] == pegs[6]))
    {
        if (pegs[2] != " ")
        {
            return true;
        }
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