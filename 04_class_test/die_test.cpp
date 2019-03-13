#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"die.h"
//write include statement for die header

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

/*
Write a test case to assert that die rolls return a value from 1 to 6.
Use a loop to roll 10 times and assert that each time value is from 1 to 6.
*/
TEST_CASE("Test rolled_value function") 
{
	Die die;
	bool condition;
	for (int i = 1; i <= 10; ++i)
	{
		die.roll();
		if (die.rolled_value() >= 1 && die.rolled_value() <= 6)
		{
			condition = true;
		}
		else
		{
			condition = false;
		}

		REQUIRE(condition == true);
			
	}
	
}