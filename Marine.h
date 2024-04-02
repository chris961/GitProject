#pragma once
#include "Unit.h"

class Marine:public Unit
{
private:
public:
	int power;
	Marine();
	void doWalk();
	void doRun();
	void doStatus();
};