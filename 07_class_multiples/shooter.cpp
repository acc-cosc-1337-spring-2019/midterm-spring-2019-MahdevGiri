//class Shooter implementation
#include"shooter.h"

Roll Shooter::shoot(Die& d1, Die&d2)
{
	Roll shooter(d1, d2);
	shooter.roll();
	
	return shooter;
}