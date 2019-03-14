/*
Create a Die instance and copy to another Die variable. 
Explain what happens with comments in your code.
Create a reference to a Die, explain what happens with comments in your code.  
Create test cases in 08_class_copy_test.
*/
#include"die.h"

int main()
{
	Die d1;
	d1.roll();
	std::cout << "d1 value: " << d1.rolled_value() << "\n";
	
	Die d1Copy = d1;
	std::cout << "d1Copy value: " << d1Copy.rolled_value() << "\n";
	// This will copy the d1 object in d1Copy object
	// The change made to d1 object after the copy statement will not be updated to the d1Copy object
	// because it is only copy , and it doesnot point to actual memory address of d1 object
	
	Die& d1Ref = d1;
	std::cout << "d1Ref value: " << d1Ref.rolled_value() << "\n\n";
	// The d1Ref object will point to actual memory address of d1 object
	// So the every change made to d1 object will be automatically updated to d1Ref object
	

	for (int i = 0; i < 10; i++)
	{
	
	d1.roll();
	std::cout <<"d1 value: "<< d1.rolled_value() << "\n";
    std::cout <<"d1Copy value: "<< d1Copy.rolled_value() << "\n";    // change will not be updated
	std::cout << "d1Ref value: " << d1Ref.rolled_value() << "\n\n";  // change will be updated
	}

	return 0;
}