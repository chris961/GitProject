#include "Marine.h"
#include <iostream>
using namespace std;

Marine::Marine()
{
	power = 2;
}
void Marine::atk()
{
	cout << "공격합니다.\n";
}

void Marine::doPowerStatus()
{
	cout << "Power: " << power << endl;
}