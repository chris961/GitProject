#include <iostream>

#include "Firebat.h"
using namespace std;


class Firebat : public Unit
{
private:

public:

	void doMove()
	{
		cout << "15 speed �̵�" << endl;
	}

	void doRun()
	{

		cout << "30 speed ���� " << endl;
	}
	void doStatus()
	{

		cout << power<<"�� ���ݷ����� ���� " << endl;
	}





};
