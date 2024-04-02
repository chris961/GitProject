#include <iostream>
#include "Marine.h"
#include "Firebat.h"

int main()
{
	Marine* mar = new Marine();
	Firebat* fire = new Firebat();

	mar->doHpStatus();
	mar->doPowerStatus();
	mar->atk();

	fire->doHpStatus();
	fire->doPowerStatus();
	fire->atk();

	return 0;
}