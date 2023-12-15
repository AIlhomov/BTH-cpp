#include <iostream>
#include <string>
#include "Register.h"

using namespace std;

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);


	//tilldelningsoperator test

	Register r1;

	//r1.addElite("Eliten", 1, "clubben 21", 2);

	////r1.viewParticipants();

	////Register r2(r1);

	//r1.removeElite("Eliten");

	//r1.viewParticipants();


	r1.addRunner("Mats", 1, 12);

	r1.removeRunner("Mats");

	r1.viewParticipants();
	




















	return 0;
}