#include<iostream>
/*
Create a Die class interface to model a game with 6 sides 
and values 1,2,3,4,5, and 6.

public function roll that returns an int

private int sides with a value of 6
*/
class Die
{
public:
	void roll();  // assigns random roll_value
	int rolled_value()const;  // returns roll_value

private:
	int roll_value;
	int sides = 6;
};