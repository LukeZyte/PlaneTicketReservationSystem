#pragma once

#include "Planes.h"
#include "Customer.h"

#include <iostream>
#include <string>

class Ticket
{
	Planes& plane;
	Customer& owner;

	int seatRow;
	int seatCol;
	int seatLevel;

public:

	Ticket(Planes& _plane, Customer& _owner, int _seatRow, int _seatCol, int _seatLevel = NULL) : plane(_plane), owner(_owner), seatRow(_seatRow), seatCol(_seatCol), seatLevel(_seatLevel) {};

	/*void show()
	{
		Planes* sam = &plane;
		Customer* kli = &owner;
		std::cout << "Owner: " << kli->getPesel() << " on plane: " << sam->getId() << std::endl;
	}*/
};

