//h
#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H
#include<iostream>
using std::cin; using std::cout;
#include<string>
using std::string;
#include<vector>
using std::vector;

class TicTacToe
{
friend std::ostream& operator<<(std::ostream& out, const TicTacToe& game);
friend std::istream& operator>>(std::istream& in, TicTacToe& game);

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const;
    string get_winner();

private:
    string player;
    string winner;
    vector<string> pegs{9, " "};
    void set_next_player();
    bool check_board_full();
    void clear_board();
    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();
};


#endif