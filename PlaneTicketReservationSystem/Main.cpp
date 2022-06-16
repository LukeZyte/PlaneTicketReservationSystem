#include "Planes.h"
#include "NarrowBodyPlane.h"
#include <iostream>

int main()
{
	NarrowBodyPlane samolot1(0, "LOT", "Boeing", 4, 10);
	Planes* ptrSamolot1 = &samolot1;
	//Planes* ptrPlane = new NarrowBodyPlane(6, 3);
	
	samolot1.setSeatsArray(2, 3, true);
	samolot1.setSeatsArray(3, 1, true);
	samolot1.setSeatsArray(0, 2, true);
	ptrSamolot1->show();

	system("PAUSE");
}