#include "Marine.h"
#include <iostream>
using namespace std;

Marine::Marine()
{
	power = 2;
}
void Marine::atk()
{
	cout << "�����մϴ�.\n";
}

void Marine::doPowerStatus()
{
	cout << "Power: " << power << endl;
}