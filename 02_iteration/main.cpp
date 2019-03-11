//write include statement
#include"fibonacci.h"
#include<iostream>
#include<string>


/*
Program runs until user opts out.
Prompt user for a number and display the fibonacci series for the number
*/
int main() 
{
	char userChoice;
	int num;
	do {
		std::cout << "Please enter the number upto which you want the fibonacci series: ";
		std::cin >> num;

		std::string s = get_fibonacci(num);
		std::cout << "The fibonacci series upto " << num << " is: \n";
		std::cout << s;
		
		std::cout<<"\n\nDo you want to continue\n";
		std::cout << "Enter 'y' to continue or enter any other key to exit\n";
		std::cin >> userChoice;
	} while (userChoice == 'y' || userChoice == 'Y');

	std::cout << "The program has exited.";

	return 0;
}