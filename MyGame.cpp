#include <iostream>
#include "Marine.h"
#include "Firebat.h"

int main()
{
	Marine* unit1 = new Marine();
	Firebat* unit2 = new Firebat();

	unit1->doWalk();
	unit1->doRun();
	unit1->doStatus();

	unit2->doWalk();
	unit2->doRun();
	unit2->doStatus();

	return 0;
}