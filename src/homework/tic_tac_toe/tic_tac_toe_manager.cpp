//cpp
#include "tic_tac_toe_manager.h"

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for (auto element:manager.games)
    {
        out<<element;
    }
}

void TicTacToeManager::save_game(TicTacToe b)
{
    games.push_back(b);
    update_winner_count(b.get_winner());
}
void TicTacToeManager::get_winner_total(int& o, int& x, int& t)
{    
    cout<<"O wins: "<<o<<"\n";
    cout<<"X wins: "<<x<<"\n";
    cout<<"Ties: "<<t<<"\n";
}


void TicTacToeManager::update_winner_count(string winner)
{
    x_win = 0;
    o_win = 0;
    ties = 0;
    if (winner == "X")
    {
        x_win +=1;
    }
    else if (winner == "O")
    {
        o_win +=1;
    }
    else if (winner == "C")
    {
        ties =+1;
    }
}
