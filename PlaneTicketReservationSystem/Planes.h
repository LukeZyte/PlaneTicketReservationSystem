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
	Planes(int _id, std::string _airline, std::string _planeModel) : id(_id), airline(_airline), planeModel(_planeModel) {};

	int getId() { return id; }
	virtual void show() = 0;
};

