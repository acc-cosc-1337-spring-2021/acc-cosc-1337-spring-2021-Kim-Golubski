#include "tic_tac_toe.h"
#include<iostream>
using std::cout; using std::cin;

int main() 
{
	TicTacToe game1;
	string letter;
	int position;

	


	do
	{
		cout<<"Choese X or O: ";
		cin>>letter;
		if (letter == "x")
		{
			letter = "X";
		}
		else if (letter == "o")
		{
			letter = "O";
		}
	} 
	while (!(letter == "X" || letter == "O"));
	
	
	
	cout<<"Choose 1-9 for your board position: ";
	cin>>position;
	game1.start_game(letter);
	game1.mark_board(position);
	game1.display_board();
	
	do
	{
		cout<<"Choose the next board position: ";
		cin>>position;
		game1.mark_board(position);
		game1.display_board();
	} while (game1.game_over() == false);

	cout<<"Game Over!";
	
	

	
	return 0;
}