#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"roll.h"


//write include statement for roll header


/*
Write a test case to assert that retrieving the result from a roll before
calling the roll function returns the string:

Must roll first!
*/

TEST_CASE("Test case for roll function")
{
	Die d1;
	Die d2;
	Roll rolls(d1, d2);
	REQUIRE(rolls.result() == "Must roll first!");
}





/*
Write a test case to assert that every dice roll returns a valid result:
Craps
Natural
Point

(Loop at least 20 times and create an assert in the loop.)
*/

TEST_CASE("Test case for result function")
{
	Die d1;
	Die d2;
	for (int i = 0; i < 20; i++)
	{
		Roll rolls(d1, d2);
		rolls.roll();
		bool check = false;
		std::string result = rolls.result();

		if (result == "Craps" || result == "Natural" || result == "Points")
		{
			check = true;
			
		}

		REQUIRE(check == true);
	}

	

}
