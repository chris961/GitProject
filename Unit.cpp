#include "Unit.h"
#include <iostream>
using namespace std;

Unit::Unit()
{
	hp = 10;
}
void Unit::doWalk(const char* str)
{
	cout << str << "(��)�� �Ƚ��ϴ�.\n";
}

void Unit::doRun(const char* str)
{
	cout << str << "(��)�� �޸��ϴ�.\n";
}

void Unit::doHpStatus()
{
	cout << "ü��: " << hp << endl;
}
