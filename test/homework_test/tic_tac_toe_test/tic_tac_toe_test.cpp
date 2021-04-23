#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test game over if 9 slots are selected")
{
	unique_ptr<TicTacToe> game1 = make_unique<TicTacToe3>();

	game1->start_game("X");
	game1->mark_board(2);
	REQUIRE(game1->game_over() == false);

	game1->mark_board(1);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(5);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(3);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(6);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(4);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(7);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(8);
	REQUIRE(game1->game_over() == false);
	game1->mark_board(9);
	REQUIRE(game1->game_over() == true);
	REQUIRE(game1->get_winner() == "C");
}
TEST_CASE("Verify first player is set to X")
{
	unique_ptr<TicTacToe> game2 = make_unique<TicTacToe3>();
	game2->start_game("X");
	REQUIRE(game2->get_player() == "X");
}
TEST_CASE("Verify first player is set to O")
{
	unique_ptr<TicTacToe> game3 = make_unique<TicTacToe3>();
	game3->start_game("O");
	REQUIRE(game3->get_player() == "O");
}
TEST_CASE("Test check_column_win function in first column","verify game_over returns true")
{
	unique_ptr<TicTacToe> game4 = make_unique<TicTacToe3>();
	game4->start_game("X");

	game4->mark_board(1);
	REQUIRE(game4->game_over() == false);
	game4->mark_board(2);
	REQUIRE(game4->game_over() == false);
	game4->mark_board(4);
	REQUIRE(game4->game_over() == false);
	game4->mark_board(3);
	REQUIRE(game4->game_over() == false);
	game4->mark_board(7);
	REQUIRE(game4->game_over() == true);
	REQUIRE(game4->get_winner() == "X");
}
TEST_CASE("Test check_column_win function in second column","verify game_over returns true")
{
	unique_ptr<TicTacToe> game5 = make_unique<TicTacToe3>();
	game5->start_game("X");

	game5->mark_board(2);
	REQUIRE(game5->game_over() == false);
	game5->mark_board(4);
	REQUIRE(game5->game_over() == false);
	game5->mark_board(5);
	REQUIRE(game5->game_over() == false);
	game5->mark_board(3);
	REQUIRE(game5->game_over() == false);
	game5->mark_board(8);
	REQUIRE(game5->game_over() == true);
	REQUIRE(game5->get_winner() == "X");
}
TEST_CASE("Test check_column_win function in third column","verify game_over returns true")
{
	unique_ptr<TicTacToe> game6 = make_unique<TicTacToe3>();
	game6->start_game("X");

	game6->mark_board(3);
	REQUIRE(game6->game_over() == false);
	game6->mark_board(2);
	REQUIRE(game6->game_over() == false);
	game6->mark_board(6);
	REQUIRE(game6->game_over() == false);
	game6->mark_board(4);
	REQUIRE(game6->game_over() == false);
	game6->mark_board(9);
	REQUIRE(game6->game_over() == true);
	REQUIRE(game6->get_winner() == "X");
}
TEST_CASE("Test check_row_win function in first row","verify game_over returns true")
{
	unique_ptr<TicTacToe> game7 = make_unique<TicTacToe3>();

	game7->start_game("X");

	game7->mark_board(1);
	REQUIRE(game7->game_over() == false);
	game7->mark_board(6);
	REQUIRE(game7->game_over() == false);
	game7->mark_board(2);
	REQUIRE(game7->game_over() == false);
	game7->mark_board(7);
	REQUIRE(game7->game_over() == false);
	game7->mark_board(3);
	REQUIRE(game7->game_over() == true);
	REQUIRE(game7->get_winner() == "X");
}
TEST_CASE("Test check_row_win function in second row","verify game_over returns true")
{
	unique_ptr<TicTacToe> game8 = make_unique<TicTacToe3>();

	game8->start_game("X");

	game8->mark_board(4);
	REQUIRE(game8->game_over() == false);
	game8->mark_board(1);
	REQUIRE(game8->game_over() == false);
	game8->mark_board(5);
	REQUIRE(game8->game_over() == false);
	game8->mark_board(2);
	REQUIRE(game8->game_over() == false);
	game8->mark_board(6);
	REQUIRE(game8->game_over() == true);
	REQUIRE(game8->get_winner() == "X");
}
TEST_CASE("Test check_row_win function in third row","verify game_over returns true")
{
	unique_ptr<TicTacToe> game9 = make_unique<TicTacToe3>();
	game9->start_game("X");

	game9->mark_board(7);
	REQUIRE(game9->game_over() == false);
	game9->mark_board(6);
	REQUIRE(game9->game_over() == false);
	game9->mark_board(8);
	REQUIRE(game9->game_over() == false);
	game9->mark_board(3);
	REQUIRE(game9->game_over() == false);
	game9->mark_board(9);
	REQUIRE(game9->game_over() == true);
	REQUIRE(game9->get_winner() == "X");
}
TEST_CASE("Test check_diagaonal_win function from top left","verify game_over returns true")
{
	unique_ptr<TicTacToe> game10 = make_unique<TicTacToe3>();
	game10->start_game("X");

	game10->mark_board(1);
	REQUIRE(game10->game_over() == false);
	game10->mark_board(2);
	REQUIRE(game10->game_over() == false);
	game10->mark_board(5);
	REQUIRE(game10->game_over() == false);
	game10->mark_board(4);
	REQUIRE(game10->game_over() == false);
	game10->mark_board(9);
	REQUIRE(game10->game_over() == true);
	REQUIRE(game10->get_winner() == "X");
}
TEST_CASE("Test check_diagaonal_win function from bottom left","verify game_over returns true")
{
	unique_ptr<TicTacToe> game11 = make_unique<TicTacToe3>();
	game11->start_game("X");

	game11->mark_board(7);
	REQUIRE(game11->game_over() == false);
	game11->mark_board(2);
	REQUIRE(game11->game_over() == false);
	game11->mark_board(5);
	REQUIRE(game11->game_over() == false);
	game11->mark_board(4);
	REQUIRE(game11->game_over() == false);
	game11->mark_board(3);
	REQUIRE(game11->game_over() == true);
	REQUIRE(game11->get_winner() == "X");
}
TEST_CASE("Test get_winner_total function with one X win,""verify x=1 o=0 t=0")
{
	unique_ptr<TicTacToe> game12 = make_unique<TicTacToe3>();
	TicTacToeManager manage1;
	int o =0;
	int x=0;
	int t=0;

	game12->start_game("X");

	game12->mark_board(1);
	REQUIRE(game12->game_over() == false);
	game12->mark_board(9);
	REQUIRE(game12->game_over() == false);
	game12->mark_board(2);
	REQUIRE(game12->game_over() == false);
	game12->mark_board(8);
	REQUIRE(game12->game_over() == false);
	game12->mark_board(3);
	REQUIRE(game12->game_over() == true);
	REQUIRE(game12->get_winner() == "X");

	manage1.save_game(game12);
	manage1.get_winner_total(o,x,t);
	REQUIRE(o==0);
	REQUIRE(x==1);
	REQUIRE(t==0);
}
TEST_CASE("Test get_winner_total function with one O win,""verify x=1 o=0 t=0")
{
	unique_ptr<TicTacToe> game13 = make_unique<TicTacToe3>();
	TicTacToeManager manage2;
	int o =0;
	int x=0;
	int t=0;

	game13->start_game("O");

	game13->mark_board(1);
	REQUIRE(game13->game_over() == false);
	game13->mark_board(9);
	REQUIRE(game13->game_over() == false);
	game13->mark_board(2);
	REQUIRE(game13->game_over() == false);
	game13->mark_board(8);
	REQUIRE(game13->game_over() == false);
	game13->mark_board(3);
	REQUIRE(game13->game_over() == true);
	REQUIRE(game13->get_winner() == "O");

	manage2.save_game(game13);
	manage2.get_winner_total(o,x,t);
	REQUIRE(o==1);
	REQUIRE(x==0);
	REQUIRE(t==0);
}
TEST_CASE("Test get_winner_total function with one Tie,""verify x=0 o=0 t=1")
{
	unique_ptr<TicTacToe> game14 = make_unique<TicTacToe3>();
	TicTacToeManager manage3;
	int o =0;
	int x=0;
	int t=0;

	game14->start_game("X");

	game14->mark_board(1);
	REQUIRE(game14->game_over() == false);
	game14->mark_board(2);
	REQUIRE(game14->game_over() == false);
	game14->mark_board(3);
	REQUIRE(game14->game_over() == false);
	game14->mark_board(4);
	REQUIRE(game14->game_over() == false);
	game14->mark_board(6);
	REQUIRE(game14->game_over() == false);
	game14->mark_board(5);
	REQUIRE(game14->game_over() == false);
	game14->mark_board(7);
	REQUIRE(game14->game_over() == false);
	game14->mark_board(9);
	REQUIRE(game14->game_over() == false);
	game14->mark_board(8);
	REQUIRE(game14->game_over() == true);
	REQUIRE(game14->get_winner() == "C");

	manage3.save_game(game14);
	manage3.get_winner_total(o,x,t);
	REQUIRE(o==0);
	REQUIRE(x==0);
	REQUIRE(t==1);
}

TEST_CASE("Test game over if 16 slots are selected")
{
	unique_ptr<TicTacToe> game15 = make_unique<TicTacToe4>();

	game15->start_game("X");
	game15->mark_board(1);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(4);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(5);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(8);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(9);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(12);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(16);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(13);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(2);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(3);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(7);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(6);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(10);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(11);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(15);
	REQUIRE(game15->game_over() == false);
	game15->mark_board(14);
	REQUIRE(game15->game_over() == true);
	REQUIRE(game15->get_winner() == "C");
}
TEST_CASE("Test check_column_win function in first column4","verify game_over returns true")
{
	unique_ptr<TicTacToe> game17 = make_unique<TicTacToe4>();
	
	game17->start_game("X");
	game17->mark_board(1);
	REQUIRE(game17->game_over() == false);
	game17->mark_board(6);
	REQUIRE(game17->game_over() == false);
	game17->mark_board(5);
	REQUIRE(game17->game_over() == false);
	game17->mark_board(7);
	REQUIRE(game17->game_over() == false);
	game17->mark_board(9);
	REQUIRE(game17->game_over() == false);
	game17->mark_board(8);
	REQUIRE(game17->game_over() == false);
	game17->mark_board(13);
	REQUIRE(game17->game_over() == true);
	REQUIRE(game17->get_winner() == "X");
}
TEST_CASE("Test check_column_win function in second column4","verify game_over returns true")
{
	unique_ptr<TicTacToe> game18 = make_unique<TicTacToe4>();

	game18->start_game("X");
	game18->mark_board(2);
	REQUIRE(game18->game_over() == false);
	game18->mark_board(1);
	REQUIRE(game18->game_over() == false);
	game18->mark_board(6);
	REQUIRE(game18->game_over() == false);
	game18->mark_board(7);
	REQUIRE(game18->game_over() == false);
	game18->mark_board(10);
	REQUIRE(game18->game_over() == false);
	game18->mark_board(8);
	REQUIRE(game18->game_over() == false);
	game18->mark_board(14);
	REQUIRE(game18->game_over() == true);
	REQUIRE(game18->get_winner() == "X");
}
TEST_CASE("Test check_column_win function in third column4","verify game_over returns true")
{
	unique_ptr<TicTacToe> game19 = make_unique<TicTacToe4>();

	game19->start_game("X");
	game19->mark_board(3);
	REQUIRE(game19->game_over() == false);
	game19->mark_board(1);
	REQUIRE(game19->game_over() == false);
	game19->mark_board(7);
	REQUIRE(game19->game_over() == false);
	game19->mark_board(5);
	REQUIRE(game19->game_over() == false);
	game19->mark_board(11);
	REQUIRE(game19->game_over() == false);
	game19->mark_board(9);
	REQUIRE(game19->game_over() == false);
	game19->mark_board(15);
	REQUIRE(game19->game_over() == true);
	REQUIRE(game19->get_winner() == "X");
}
TEST_CASE("Test check_column_win function in fourth column4","verify game_over returns true")
{
	unique_ptr<TicTacToe> game20 = make_unique<TicTacToe4>();

	game20->start_game("X");
	game20->mark_board(4);
	REQUIRE(game20->game_over() == false);
	game20->mark_board(1);
	REQUIRE(game20->game_over() == false);
	game20->mark_board(8);
	REQUIRE(game20->game_over() == false);
	game20->mark_board(5);
	REQUIRE(game20->game_over() == false);
	game20->mark_board(12);
	REQUIRE(game20->game_over() == false);
	game20->mark_board(9);
	REQUIRE(game20->game_over() == false);
	game20->mark_board(16);
	REQUIRE(game20->game_over() == true);
	REQUIRE(game20->get_winner() == "X");
}
TEST_CASE("Test check_row_win function in first row4","verify game_over returns true")
{
	unique_ptr<TicTacToe> game21 = make_unique<TicTacToe4>();

	game21->start_game("X");
	game21->mark_board(1);
	REQUIRE(game21->game_over() == false);
	game21->mark_board(13);
	REQUIRE(game21->game_over() == false);
	game21->mark_board(2);
	REQUIRE(game21->game_over() == false);
	game21->mark_board(14);
	REQUIRE(game21->game_over() == false);
	game21->mark_board(3);
	REQUIRE(game21->game_over() == false);
	game21->mark_board(15);
	REQUIRE(game21->game_over() == false);
	game21->mark_board(4);
	REQUIRE(game21->game_over() == true);
	REQUIRE(game21->get_winner() == "X");
}
TEST_CASE("Test check_row_win function in second row4","verify game_over returns true")
{
	unique_ptr<TicTacToe> game22 = make_unique<TicTacToe4>();

	game22->start_game("X");
	game22->mark_board(5);
	REQUIRE(game22->game_over() == false);
	game22->mark_board(13);
	REQUIRE(game22->game_over() == false);
	game22->mark_board(6);
	REQUIRE(game22->game_over() == false);
	game22->mark_board(14);
	REQUIRE(game22->game_over() == false);
	game22->mark_board(7);
	REQUIRE(game22->game_over() == false);
	game22->mark_board(15);
	REQUIRE(game22->game_over() == false);
	game22->mark_board(8);
	REQUIRE(game22->game_over() == true);
	REQUIRE(game22->get_winner() == "X");
}
TEST_CASE("Test check_row_win function in thrid row4","verify game_over returns true")
{
	unique_ptr<TicTacToe> game23 = make_unique<TicTacToe4>();

	game23->start_game("X");
	game23->mark_board(9);
	REQUIRE(game23->game_over() == false);
	game23->mark_board(13);
	REQUIRE(game23->game_over() == false);
	game23->mark_board(10);
	REQUIRE(game23->game_over() == false);
	game23->mark_board(14);
	REQUIRE(game23->game_over() == false);
	game23->mark_board(11);
	REQUIRE(game23->game_over() == false);
	game23->mark_board(15);
	REQUIRE(game23->game_over() == false);
	game23->mark_board(12);
	REQUIRE(game23->game_over() == true);
	REQUIRE(game23->get_winner() == "X");
}
TEST_CASE("Test check_row_win function in fourth row4","verify game_over returns true")
{
	unique_ptr<TicTacToe> game23 = make_unique<TicTacToe4>();

	game23->start_game("X");
	game23->mark_board(13);
	REQUIRE(game23->game_over() == false);
	game23->mark_board(1);
	REQUIRE(game23->game_over() == false);
	game23->mark_board(14);
	REQUIRE(game23->game_over() == false);
	game23->mark_board(2);
	REQUIRE(game23->game_over() == false);
	game23->mark_board(15);
	REQUIRE(game23->game_over() == false);
	game23->mark_board(3);
	REQUIRE(game23->game_over() == false);
	game23->mark_board(16);
	REQUIRE(game23->game_over() == true);
	REQUIRE(game23->get_winner() == "X");
}
TEST_CASE("Test check_diagaonal_win function from top left4","verify game_over returns true")
{
	unique_ptr<TicTacToe> game24 = make_unique<TicTacToe4>();

	game24->start_game("X");
	game24->mark_board(1);
	REQUIRE(game24->game_over() == false);
	game24->mark_board(2);
	REQUIRE(game24->game_over() == false);
	game24->mark_board(6);
	REQUIRE(game24->game_over() == false);
	game24->mark_board(5);
	REQUIRE(game24->game_over() == false);
	game24->mark_board(11);
	REQUIRE(game24->game_over() == false);
	game24->mark_board(7);
	REQUIRE(game24->game_over() == false);
	game24->mark_board(16);
	REQUIRE(game24->game_over() == true);
	REQUIRE(game24->get_winner() == "X");
}
TEST_CASE("Test check_diagaonal_win function from bottom left4","verify game_over returns true")
{
	unique_ptr<TicTacToe> game25 = make_unique<TicTacToe4>();

	game25->start_game("X");
	game25->mark_board(4);
	REQUIRE(game25->game_over() == false);
	game25->mark_board(1);
	REQUIRE(game25->game_over() == false);
	game25->mark_board(7);
	REQUIRE(game25->game_over() == false);
	game25->mark_board(5);
	REQUIRE(game25->game_over() == false);
	game25->mark_board(10);
	REQUIRE(game25->game_over() == false);
	game25->mark_board(2);
	REQUIRE(game25->game_over() == false);
	game25->mark_board(13);
	REQUIRE(game25->game_over() == true);
	REQUIRE(game25->get_winner() == "X");
}