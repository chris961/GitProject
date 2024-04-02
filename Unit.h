#pragma once

class Unit
{
private:
public:
	int hp;
	Unit();
	virtual void doWalk();
	virtual void doRun();
	virtual void doStatus();
};