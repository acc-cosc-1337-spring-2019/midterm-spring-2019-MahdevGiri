

/*
Program runs until user opts out.

Create a Craps instance
Use overloaded cin on instance capture number of users
call play_game()
Use overloaded cout on instance-outputs vector roll result

*/
#include"craps.h"
#include<iostream>
#include<vector>
using namespace std;
int main() 
{
	Craps game;
	
	cout << "How many players are playing? " << "\n";
	cin >> game;
	game.play_game();
	cout << game;

	cin.get();
	cin.ignore();
	return 0;
}