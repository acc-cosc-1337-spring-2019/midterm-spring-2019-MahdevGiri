#include"dna_consensus.h"
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() 
{
	char userChoice;
	int dnaCount;
	string dna;
	vector <string>dnaList;

	do {
		cout << "How many dna's do you like to enter: ";
		cin >> dnaCount;
		for (int i = 1; i <= dnaCount; i++)
		{
			cout << "Enter the dna "<<i<< " in (UPPERCASE): " << endl;
			cin >> dna;
			dnaList.push_back(dna);
		}
		vector<string>profile = get_consensus(dnaList, dna.length(), dnaCount);
		for (auto s : profile)
		{
			cout << s << "\n";
		}

		cout << "\n\nDo you want to continue \n";
		cout << "Enter 'y' to continue or enter any other key to exit.\n";
		cin >> userChoice;
	} while (userChoice == 'y' || userChoice == 'Y');


	return 0;
}