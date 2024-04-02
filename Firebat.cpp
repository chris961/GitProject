#include "Firebat.h"
#include <iostream>
using namespace std;

Firebat::Firebat()
{
	power = 2;
}
void Firebat::atk()
{
	cout << "공격합니다.\n";
}

void Firebat::doPowerStatus()
{
	cout << "Power: " << power << endl;
}