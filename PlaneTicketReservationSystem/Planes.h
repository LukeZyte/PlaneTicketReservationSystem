#pragma once

//#include "NarrowBodyPlane.h"
//#include "WideBodyPlane.h"
#include <string>

// Zrobic szerokokadlubowy - Ma sekcje VIP i sekcje Biznesowa oraz 2 pietra, waskopokladowy - bez sekcji, 1 pietro
class Planes
{
	int id;
	std::string airline;
	std::string planeModel;
	
public:
	Planes(int _id = 0, std::string _airline = "LOT", std::string _planeModel = "BOEING") : id(_id), airline(_airline), planeModel(_planeModel) {};

	virtual void show() = 0;
};

