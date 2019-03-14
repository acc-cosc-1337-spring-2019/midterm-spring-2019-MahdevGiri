//roll-ol class interface

#ifndef ROLL_OL_H
#define ROLL_OL_H
#include"die.h"
#include<iostream>
#include<string>
class Roll
{
public:
	Roll() {}  // default constructor
	Roll(Die& d1, Die& d2) :die1(d1), die2(d2)
	{}
	void roll();
	void roll(Die& d1, Die& d2); // overloaded roll function
	std::string result();
	int value_1()const;
	int value_2()const;

private:
	Die die1;
	Die die2;
	int die1_roll_value, die2_roll_value;
	bool rolled = false;
	bool craps();
	bool natural();

};



#endif //! ROLL_OL_H