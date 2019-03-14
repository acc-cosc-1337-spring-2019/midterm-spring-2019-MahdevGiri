
#include"roll.h"
#include<iostream>
#include<vector>

using std::vector;
using std::cout;
/*
Create two Die instances.
Create a vector of Roll
Create a 20iteration loop and create a Roll instance, call roll function, 
output rolled values, and add to vector.

Loop through vector of Roll and output roll result
*/
int main() 
{
	Die d1;
	Die d2;
	vector<Roll>rollList;
	for (int i = 0; i < 20; i++) 
	{
		Roll rolls(d1, d2);
		rolls.roll();
		rollList.push_back(rolls);
	}

	for (auto c : rollList)
	{
		cout << "\n" << "Roll_value_1: " << c.value_1() << "\n";
		cout << "Roll_value_2: " << c.value_2(); "\n";
		cout << "\nResults: " << c.result() << "\n";
	}
	

	
	return 0;
}