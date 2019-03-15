/*
Create an instance of roll and call the friend function to output roll values
*/
#include"roll_friend.h"
#include<iostream>
int main() 
{
	Die d1;
	Die d2;
	Roll rol(d1,d2);
	rol.roll();
	std::cout << rol<<"\n";
	return 0;
}