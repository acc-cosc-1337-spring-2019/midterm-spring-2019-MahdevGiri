//class Craps implementation
#include"craps.h"
#include<vector>
#include<iostream>

void Craps::play_game()
{
	
	
	int player = 0;
	Die d1;
	Die d2;
	Shooter s;
	
	bool nextPlayer = false;
	bool gameOver = false;
	for (auto sObj : shooters) {
		do {
			player++;
			std::cout << "\n((STARTING NEW GAME)) \n";

			std::cout << "press Enter to continue\n";
			std::cin.get();
			
			Roll game = s.shoot(d1, d2);

			if (game.result() == "Craps")
			{
				std::cout << "=>player " << player << " lose (Craps)" << "\n";
				rolls.push_back(game);
				gameOver = true;
				
			}

			else if (game.result() == "Natural")
			{
				std::cout << "=>player " << player << " win (Natural)" << "\n";
				rolls.push_back(game);
				nextPlayer = true;
				
			}

			if (game.result() == "Points" || nextPlayer == true)
			{
				if(nextPlayer==false)
				{
					rolls.push_back(game);
				}
				
                int playerPoint = game.value_1() + game.value_2();

				std::cout << "=>player " << player << " is on(point) " << playerPoint<<"\n";
				nextPlayer = false;
				//rolls.push_back(game);
				

				std::cout << "press Enter to continue\n";
				std::cin.get();
				do {
					Roll game = s.shoot(d1, d2);
					if (game.value_1() + game.value_2() == 7)
					{
						std::cout << "=>player " << player << " lose (a Seven-out)" << "\n";
						//rolls.push_back(game);
						gameOver = true;
						
					}
					else if (game.value_1() + game.value_2() == playerPoint)
					{
						std::cout << "=>player " << player << " win by getting the same point" << "\n";
						//rolls.push_back(game);
						gameOver = true;
					
					}
					else
					{
						gameOver = false;
					}
				} while (gameOver == false);
			}

		} while (gameOver == false);
	}
}


std::ostream & operator <<(std::ostream & out, const Craps & game)
{
	
	for (auto r : game.rolls)
	{
		out << r.result() << "\n";
	}
	return out;
}

 std::istream & operator >>(std::istream & in, Craps & game)
{
	int num;
	in >> num;
	for (int i = 0; i < num; i++)
	{

		Shooter player;
		game.shooters.push_back(player);
	}
	return in;
}