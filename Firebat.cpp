#include <iostream>

#include "Firebat.h"
using namespace std;


class Firebat : public Unit
{
private:

public:

	void doMove()
	{
		cout << "15 speed 이동" << endl;
	}

	void doRun()
	{

		cout << "30 speed 질주 " << endl;
	}
	void doStatus()
	{

		cout << power<<"의 공격력으로 공격 " << endl;
	}





};
