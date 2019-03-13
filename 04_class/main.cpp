#include"die.h"
#include<iostream>

//Write include statement
/*
Program runs until user opts out.

For each loop Roll die and display output

*/

int main() 
{
	Die die;
	char userChoice;

	do 
	{
		std::cout << "Rolling the die. \n";
		die.roll();
		std::cout <<"Roll Value: "<< die.rolled_value()<<"\n";
		std::cout << "Do you want to roll again? " << "\n";
		std::cout << "Enter 'y' to try again or enter any other key to exit" << "\n";
		std::cin >> userChoice;

	} while (userChoice == 'y' || userChoice == 'Y');
	
	return 0;
}