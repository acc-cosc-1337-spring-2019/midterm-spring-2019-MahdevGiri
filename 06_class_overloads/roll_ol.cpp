//class implementation
// roll class implementation
#include"roll_ol.h"


void Roll::roll()
{
	
	die1.roll();
	die1_roll_value = die1.rolled_value();

	die2.roll();
	die2_roll_value = die2.rolled_value();

	rolled = true;
}


void Roll::roll(Die& d1, Die& d2)
{
	die1 = d1; 
	die2 = d2;

	die1.roll();
	die1_roll_value = die1.rolled_value();

	die2.roll();
	die2_roll_value = die2.rolled_value();

	rolled = true;
}

std::string Roll::result()
{
	if (rolled == true)
	{
		if (craps())
		{
			return "Craps";
		}
		else if (natural())
		{
			return "Natural";
		}
		else
		{
			return "Points";
		}
	}
	else
	{
		return "Must roll first!";
	}
}

int Roll::value_1()const
{
	return die1_roll_value;
}

int Roll::value_2()const
{
	return die2_roll_value;
}

bool Roll::craps()
{
	int sum = die1_roll_value + die2_roll_value;
	if (sum == 2 || sum == 3 || sum == 12)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Roll::natural()
{
	int sum = die1_roll_value + die2_roll_value;
	if (sum == 7 || sum == 11)
	{
		return true;
	}
	else
	{
		return false;
	}
}