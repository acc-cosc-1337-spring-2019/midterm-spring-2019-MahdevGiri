#include"shooter.h"
#include<iostream>
#include<vector>
using std::cout;
/*
Program runs until user opts out.
Create two Die instances, a Shooter instance, and a vector of Roll objects.
Create a loop that allows user to shoot 10 times and add each roll created by 
Shooter shoot() function into vector of Roll.

In another loop iterate the vector of Roll and dislplay the Roll result.
*/
int main() 
{
	char userChoice;
	do {
		Die die1;
		Die die2;
		Shooter shootOb;
		std::vector<Roll>rollVec;

		for (int i = 0; i < 10; i++) {

            Roll rollObj = shootOb.shoot(die1, die2);
			rollVec.push_back(rollObj);
		}
		for (auto c : rollVec)
		{
			cout << "\n" << "Roll_value_1: " << c.value_1() << "\n";
			cout << "Roll_value_2: " << c.value_2(); "\n";
			cout << "\nResults: " << c.result() << "\n";
		}

		cout << "\nDo you want to continue.\nEnter 'y' to continue or any key to exit:\n";
		std::cin >> userChoice;
	} while (userChoice == 'Y' || userChoice == 'y');

	return 0;
}