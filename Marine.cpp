#include "Marine.h"
#include <iostream>
using namespace std;

Marine::Marine()
{
	power = 2;
}

void doWalk() {
	printf("Marine is Walk");
}

void doRun() {
	printf("Marine is Run");
}

void doStatus() {
	printf("Marine Attack : %d", power);
}