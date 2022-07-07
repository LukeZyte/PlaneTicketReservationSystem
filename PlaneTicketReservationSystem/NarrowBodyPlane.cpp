#include "NarrowBodyPlane.h"

void NarrowBodyPlane::initSeatsArray()
{
    seatsArray = new Customer* [seatsRows];

    for (int i = 0; i < seatsRows; i++)
    {
        seatsArray[i] = new Customer [seatsCols];
    }
}