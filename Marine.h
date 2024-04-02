#pragma once
#include "Unit.h"

class Marine:public Unit
{
private:
	int power;
public:
	Marine();
	void atk();
	void doPowerStatus();
};