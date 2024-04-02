#pragma once
#include "Unit.h"

class Firebat :public Unit
{
private:
	int power;
public:
	Firebat();
	void atk();
	void doPowerStatus();
};