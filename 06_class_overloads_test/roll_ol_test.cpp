#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"roll_ol.h"
/*
Test the overloaded function to make sure roll's produce a valid result:
Craps
Natural
Point

Create Loop of at least 20 iterations
*/
TEST_CASE("Test case for overload function")
{
	Die d1;
	Die d2;
	for (int i = 0; i < 20; i++)
	{
		Roll rolls;
		rolls.roll(d1, d2);
		bool check = false;
		std::string result = rolls.result();

		if (result == "Craps" || result == "Natural" || result == "Points")
		{
			check = true;

		}

		REQUIRE(check == true);
	}
}