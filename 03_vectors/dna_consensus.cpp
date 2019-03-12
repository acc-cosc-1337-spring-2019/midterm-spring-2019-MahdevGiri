#include "dna_consensus.h"

vector<string> get_consensus(vector<string> dnaList1,int dnaLen,int dnaNum)
{
	string consensus;
	string strA = "A: ";
	string strC = "C: ";
	string strG = "G: ";
	string strT = "T: ";

	for (int i = 0; i < dnaLen; i++) //column
	{
		int numA = 0;
		int numC = 0;
		int numG = 0;
		int numT = 0;

		for (int j = 0; j < dnaNum; j++) //row
		{
			if (dnaList1[j][i] == 'A')
			{
				numA++;

			}
			else if (dnaList1[j][i] == 'C')
			{
				numC++;
			}
			else if (dnaList1[j][i] == 'G')
			{
				numG++;
			}
			else if (dnaList1[j][i] == 'T')
			{
				numT++;
			}

			else
			{
				cout << "looks like input error for dna\n";
				break;
			}

		}

			if (numA > numC && numA > numG && numA > numT)
			{
				consensus = consensus + "A";
				
			}
			else if (numC > numA && numC > numG && numC > numT)
			{
				consensus = consensus + "C";
				
			}
			else if (numG > numA && numG > numC && numG > numT)
			{
				consensus = consensus + "G";
				
			}
			else if (numT > numA && numT > numC && numT > numG)
			{
				consensus = consensus + "T";
				
			}
			else
			{
				consensus = consensus + "A";  // if several possible consensus
			}
			strA = strA +" "+ to_string(numA);
			strC = strC +" "+ to_string(numC);
			strG = strG +" "+ to_string(numG);
			strT = strT +" "+ to_string(numT);

	    
	}
	
	vector<string>profile;
	profile.push_back(consensus);
	profile.push_back(strA);
	profile.push_back(strC);
	profile.push_back(strG);
	profile.push_back(strT);

	return profile;
}
