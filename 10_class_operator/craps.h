//class Craps interface

#ifndef CRAPS_H
#define CRAPS_H
#include<iostream>
#include<vector>
#include"shooter.h"
#include"roll.h"


class Craps
{
public: 
	void play_game();
	friend std::ostream & operator <<(std::ostream & out, const Craps & game);
	friend std::istream & operator >>(std::istream & in, Craps & game);

private:
	std::vector <Roll> rolls;
	std::vector <Shooter> shooters;

};

#endif //! CRAPS_H