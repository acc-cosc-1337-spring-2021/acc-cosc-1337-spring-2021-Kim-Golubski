#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}


TEST_CASE("Test game over if 9 slots are selected")
{
	TicTacToe game1;

	game1.start_game("X");
	game1.mark_board(2);
	REQUIRE(game1.game_over() == false);

	game1.mark_board(1);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(5);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(3);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(6);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(4);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(7);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(8);
	REQUIRE(game1.game_over() == false);
	game1.mark_board(9);
	REQUIRE(game1.game_over() == true);
	REQUIRE(game1.get_winner() == "C");
}
TEST_CASE("Verify first player is set to X")
{
	TicTacToe game2;
	game2.start_game("X");
	REQUIRE(game2.get_player() == "X");
}
TEST_CASE("Verify first player is set to O")
{
	TicTacToe game3;
	game3.start_game("O");
	REQUIRE(game3.get_player() == "O");
}
TEST_CASE("Test check_column_win function in first column","verify game_over returns true")
{
	TicTacToe game4;
	game4.start_game("X");

	game4.mark_board(1);
	REQUIRE(game4.game_over() == false);
	game4.mark_board(2);
	REQUIRE(game4.game_over() == false);
	game4.mark_board(4);
	REQUIRE(game4.game_over() == false);
	game4.mark_board(3);
	REQUIRE(game4.game_over() == false);
	game4.mark_board(7);
	REQUIRE(game4.game_over() == true);
	REQUIRE(game4.get_winner() == "X");
}
TEST_CASE("Test check_column_win function in second column","verify game_over returns true")
{
	TicTacToe game5;
	game5.start_game("X");

	game5.mark_board(2);
	REQUIRE(game5.game_over() == false);
	game5.mark_board(4);
	REQUIRE(game5.game_over() == false);
	game5.mark_board(5);
	REQUIRE(game5.game_over() == false);
	game5.mark_board(3);
	REQUIRE(game5.game_over() == false);
	game5.mark_board(8);
	REQUIRE(game5.game_over() == true);
	REQUIRE(game5.get_winner() == "X");
}
TEST_CASE("Test check_column_win function in third column","verify game_over returns true")
{
	TicTacToe game6;
	game6.start_game("X");

	game6.mark_board(3);
	REQUIRE(game6.game_over() == false);
	game6.mark_board(2);
	REQUIRE(game6.game_over() == false);
	game6.mark_board(6);
	REQUIRE(game6.game_over() == false);
	game6.mark_board(4);
	REQUIRE(game6.game_over() == false);
	game6.mark_board(9);
	REQUIRE(game6.game_over() == true);
	REQUIRE(game6.get_winner() == "X");
}
TEST_CASE("Test check_row_win function in first row","verify game_over returns true")
{
	TicTacToe game7;

	game7.start_game("X");

	game7.mark_board(1);
	REQUIRE(game7.game_over() == false);
	game7.mark_board(6);
	REQUIRE(game7.game_over() == false);
	game7.mark_board(2);
	REQUIRE(game7.game_over() == false);
	game7.mark_board(7);
	REQUIRE(game7.game_over() == false);
	game7.mark_board(3);
	REQUIRE(game7.game_over() == true);
	REQUIRE(game7.get_winner() == "X");
}
TEST_CASE("Test check_row_win function in second row","verify game_over returns true")
{
	TicTacToe game8;

	game8.start_game("X");

	game8.mark_board(4);
	REQUIRE(game8.game_over() == false);
	game8.mark_board(1);
	REQUIRE(game8.game_over() == false);
	game8.mark_board(5);
	REQUIRE(game8.game_over() == false);
	game8.mark_board(2);
	REQUIRE(game8.game_over() == false);
	game8.mark_board(6);
	REQUIRE(game8.game_over() == true);
	REQUIRE(game8.get_winner() == "X");
}
TEST_CASE("Test check_row_win function in third row","verify game_over returns true")
{
	TicTacToe game9;
	game9.start_game("X");

	game9.mark_board(7);
	REQUIRE(game9.game_over() == false);
	game9.mark_board(6);
	REQUIRE(game9.game_over() == false);
	game9.mark_board(8);
	REQUIRE(game9.game_over() == false);
	game9.mark_board(3);
	REQUIRE(game9.game_over() == false);
	game9.mark_board(9);
	REQUIRE(game9.game_over() == true);
	REQUIRE(game9.get_winner() == "X");
}
TEST_CASE("Test check_diagaonal_win function from top left","verify game_over returns true")
{
	TicTacToe game10;
	game10.start_game("X");

	game10.mark_board(1);
	REQUIRE(game10.game_over() == false);
	game10.mark_board(2);
	REQUIRE(game10.game_over() == false);
	game10.mark_board(5);
	REQUIRE(game10.game_over() == false);
	game10.mark_board(4);
	REQUIRE(game10.game_over() == false);
	game10.mark_board(9);
	REQUIRE(game10.game_over() == true);
	REQUIRE(game10.get_winner() == "X");
}
TEST_CASE("Test check_diagaonal_win function from bottom left","verify game_over returns true")
{
	TicTacToe game11;
	game11.start_game("X");

	game11.mark_board(7);
	REQUIRE(game11.game_over() == false);
	game11.mark_board(2);
	REQUIRE(game11.game_over() == false);
	game11.mark_board(5);
	REQUIRE(game11.game_over() == false);
	game11.mark_board(4);
	REQUIRE(game11.game_over() == false);
	game11.mark_board(3);
	REQUIRE(game11.game_over() == true);
	REQUIRE(game11.get_winner() == "X");
}
TEST_CASE("Test get_winner_total function with one X win,""verify x=1 o=0 t=0")
{
	TicTacToe game12;
	TicTacToeManager manage1;
	int o =0;
	int x=0;
	int t=0;

	game12.start_game("X");

	game12.mark_board(1);
	REQUIRE(game12.game_over() == false);
	game12.mark_board(9);
	REQUIRE(game12.game_over() == false);
	game12.mark_board(2);
	REQUIRE(game12.game_over() == false);
	game12.mark_board(8);
	REQUIRE(game12.game_over() == false);
	game12.mark_board(3);
	REQUIRE(game12.game_over() == true);
	REQUIRE(game12.get_winner() == "X");

	manage1.save_game(game12);
	if (game12.get_winner() == "X")
	{
		x += 1;
	}
	else if (game12.get_winner() == "O")
	{
		o += 1;
	}
	else if (game12.get_winner() == "C")
	{
		t += 1;
	}
	manage1.get_winner_total(o,x,t);
	REQUIRE(o==0);
	REQUIRE(x==1);
	REQUIRE(t==0);
}
TEST_CASE("Test get_winner_total function with one O win,""verify x=1 o=0 t=0")
{
	TicTacToe game13;
	TicTacToeManager manage2;
	int o =0;
	int x=0;
	int t=0;

	game13.start_game("O");

	game13.mark_board(1);
	REQUIRE(game13.game_over() == false);
	game13.mark_board(9);
	REQUIRE(game13.game_over() == false);
	game13.mark_board(2);
	REQUIRE(game13.game_over() == false);
	game13.mark_board(8);
	REQUIRE(game13.game_over() == false);
	game13.mark_board(3);
	REQUIRE(game13.game_over() == true);
	REQUIRE(game13.get_winner() == "O");

	manage2.save_game(game13);
	if (game13.get_winner() == "X")
	{
		x += 1;
	}
	else if (game13.get_winner() == "O")
	{
		o += 1;
	}
	else if (game13.get_winner() == "C")
	{
		t += 1;
	}
	manage2.get_winner_total(o,x,t);
	REQUIRE(o==1);
	REQUIRE(x==0);
	REQUIRE(t==0);
}
TEST_CASE("Test get_winner_total function with one Tie,""verify x=0 o=0 t=1")
{
	TicTacToe game14;
	TicTacToeManager manage3;
	int o =0;
	int x=0;
	int t=0;

	game14.start_game("X");

	game14.mark_board(1);
	REQUIRE(game14.game_over() == false);
	game14.mark_board(2);
	REQUIRE(game14.game_over() == false);
	game14.mark_board(3);
	REQUIRE(game14.game_over() == false);
	game14.mark_board(4);
	REQUIRE(game14.game_over() == false);
	game14.mark_board(6);
	REQUIRE(game14.game_over() == false);
	game14.mark_board(5);
	REQUIRE(game14.game_over() == false);
	game14.mark_board(7);
	REQUIRE(game14.game_over() == false);
	game14.mark_board(9);
	REQUIRE(game14.game_over() == false);
	game14.mark_board(8);
	REQUIRE(game14.game_over() == true);
	REQUIRE(game14.get_winner() == "C");

	manage3.save_game(game14);
	if (game14.get_winner() == "X")
	{
		x += 1;
	}
	else if (game14.get_winner() == "O")
	{
		o += 1;
	}
	else if (game14.get_winner() == "C")
	{
		t += 1;
	}
	manage3.get_winner_total(o,x,t);
	REQUIRE(o==0);
	REQUIRE(x==0);
	REQUIRE(t==1);
}