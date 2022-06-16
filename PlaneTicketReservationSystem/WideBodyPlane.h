#pragma once
#include "Planes.h"

#include <string>

// Samolot szerokopok³adowy <-- sekcja VIP, biznesowa, 2pokladowy
class WideBodyPlane :
   public Planes
{
public:
	WideBodyPlane(int _id, std::string _airlines, std::string _planeModel) : Planes(_id, _airlines, _planeModel) {};
};

