#pragma once
#include "Unit.h"

class Firebat :public Unit
{
private:
public:
	int power;
	Firebat();
	int hp;
	Unit();
	virtual void doWalk();
	virtual void doRun();
	virtual void doStatus();
};