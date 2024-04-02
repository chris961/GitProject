#pragma once
#include "Unit.h"

class Firebat :public Unit
{
private:
public:
	int power;
	Firebat();
	void atk();
	void doWalk();
	void doRun();
};