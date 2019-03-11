#include"fibonacci.h"


//using namespace std;
/*
Write prototype for string value - return function get_fibonacci with an int
parameter that returns the fibonacci sequence up to that number.

DO NOT USE A RECURSIVE FUNCTION
*/
std::string get_fibonacci(int num)
{
	std::string series="0";
	int val1 = 0;
	int val2 = 1;
	int val3 = 0;
	while (val3 <= num)
	{
		
		series = series +"  "+ std::to_string(val2); 
		val3 = val1 + val2;
		val1 = val2;
		val2 = val3;
		
		
	}
	return series;
}