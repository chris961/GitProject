#include "Firebat.h"
#include <iostream>
using namespace std;

Firebat::Firebat()
{
	power = 2;
}
void Firebat::atk()
{
	cout << "�����մϴ�.\n";
}

void Firebat::doPowerStatus()
{
	cout << "Power: " << power << endl;
}