#pragma once
#include "Unit.h"

class Marine:public Unit
{
private:
public:
	int power;
	Marine();
	void atk();
	void doWalk();
	void doRun();
};