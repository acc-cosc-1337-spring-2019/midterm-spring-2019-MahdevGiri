#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"shooter.h"

/*
Test that shooter returns a Roll and verify that the roll result has one 
of the following values:
Natural
Craps
Point

*/


TEST_CASE("Test case for roll result")
{
	Die d1;
	Die d2;
	Shooter shootObj;

	for (int i = 0; i < 20; i++)
	{
		Roll rollObj = shootObj.shoot(d1, d2); // shoot returns the Roll 
		bool check = false;
		std::string result = rollObj.result();

		if (result == "Craps" || result == "Natural" || result == "Points")
		{
			check = true;

		}

		REQUIRE(check == true);
	}
}