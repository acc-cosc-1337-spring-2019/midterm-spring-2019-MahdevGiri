//class RollFriend implementation
#include"roll_friend.h"

void Roll::roll()
{

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

std::ostream & operator <<(std::ostream & out, const Roll & r)
{
	out << "Die1_Roll_Value: " << r.value_1() << "\n";
	out << "Die2_Roll_Value: " << r.value_2() << "\n";
	return out;
}