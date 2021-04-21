#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include<iostream>
using std::cout; using std::cin;

int main() 
{
	TicTacToe game1;
	TicTacToeManager manage;
	string letter;
	int position;
	char choice = 'y';
	int X = 0;
	int O = 0;
	int Ties = 0;
	

	while (choice == 'y')
	{	
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

		game1.start_game(letter);

		
		do
		{
			
			cin>>game1;
			cout<<game1;
		}
		while (game1.game_over() == false);

		
		if (game1.get_winner() == "X")
		{
			X += 1;
		}
		else if (game1.get_winner() == "O")
		{
			O += 1;
		}
		else if (game1.get_winner() == "C")
		{
			Ties += 1;
		}

		cout<<"Game Over! "<<game1.get_winner()<<" is the winner! "<<"\n";		
		manage.save_game(game1);
		manage.get_winner_total(O, X, Ties);	
		cout<<"Enter Y to play again: ";
		cin>>choice;
		cout<<manage;
	}
	

	
	return 0;
}