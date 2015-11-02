#include <iostream>
#include <cstring>
#include "player.h"
using namespace std;

void player::getPlayerLetter()
{

	cout << "\nWelcome to Tic-Tac-Toe!\n\n";

	while (true) {
		cout << "Do you want to be 'X' or 'O': ";
		cin >> playerLetter;

		if (playerLetter == 'X' || playerLetter == 'O') {
			return;
		}
	}
}

int player::chooseSquare()
{
	int choice;

	cout << "Please choose a Square: ";
	cin >> choice;

	return choice;
}