#include "WideBodyPlane.h"

void WideBodyPlane::initSeatsArray()
{
	seatsArray = new Customer** [seatsLevels];

	for (int level = 0; level < seatsLevels; level++)
	{
		seatsArray[level] = new Customer* [seatsRows];

		for (int row = 0; row < seatsRows; row++)
		{
			seatsArray[level][row] = new Customer [seatsCols];
		}
	}
}