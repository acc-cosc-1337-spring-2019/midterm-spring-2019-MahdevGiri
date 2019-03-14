#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"die.h"
using namespace std;

//Create a test case that shows that a copy of Die are not the same
//objects in memory

TEST_CASE("test case that shows that a copy of Die are not the same objects in memory")
{
	Die d1;
	d1.roll();

	Die d1Copy = d1;

    for (int i = 0; i < 5; i++)
	{

		d1.roll(); 
		
	}
	
	REQUIRE(d1.rolled_value()!= d1Copy.rolled_value());


}