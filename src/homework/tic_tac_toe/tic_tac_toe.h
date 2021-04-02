//h
#include<iostream>
using std::cin; using std::cout;
#include<string>
using std::string;
#include<vector>
using std::vector;

class TicTacToe
{
public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    string get_player()const;
    void display_board()const;

private:
    string player;
    vector<string> pegs{9, " "};
    void set_next_player();
    bool check_board_full();
    void clear_board();

};