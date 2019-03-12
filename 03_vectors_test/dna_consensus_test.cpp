#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include"dna_consensus.h"
#include<vector>
#include<string>
//write include statement for dna consensus header

TEST_CASE("Test configuration setup")
{
	REQUIRE(true == true);
}

TEST_CASE("Test the function get_consensus")
{
	std::vector <std::string>dnaList;
	dnaList.push_back("ATCCAGCT");
	dnaList.push_back("GGGCAACT");
	dnaList.push_back("ATGGATCT");
	dnaList.push_back("AAGCAACC");
	dnaList.push_back("TTGGAACT");
	dnaList.push_back("ATGCCATT");
	dnaList.push_back("ATGGCACT");


	std::vector<std::string>profile = get_consensus(dnaList,8,7);

	REQUIRE(profile[0]=="ATGCAACT");
}