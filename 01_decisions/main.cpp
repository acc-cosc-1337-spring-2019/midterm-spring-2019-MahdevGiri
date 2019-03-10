#include"dna_hamming.h"
int main() 
{
	char userChoice;
	do {
		std::string s1;
		std::string s2;
		std::cout << "Enter the first dna string: ";
		std::cin >> s1;
		std::cout << "Enter the second dna string: ";
		std::cin >>s2;

		int distance = get_dna_hamming_distance(s1,s2);
        std::cout << "the hamming distance is: " << distance << "\n";

		std::cout << "Do you want to continue: \n";
		std::cout << "Enter 'Y' to continue or enter any other key to exit.\n";
		std::cin >> userChoice;
	} while (userChoice == 'Y' || userChoice == 'y');

	std::cout << "Program has exited. Thank You.";
	return 0;
}