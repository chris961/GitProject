#include "Unit.h"
#include <iostream>
using namespace std;

Unit::Unit()
{
	hp = 10;
}
void Unit::doWalk(const char* str)
{
	cout << str << "(이)가 걷습니다.\n";
}

void Unit::doRun(const char* str)
{
	cout << str << "(이)가 달립니다.\n";
}

void Unit::doHpStatus()
{
	cout << "체력: " << hp << endl;
}
