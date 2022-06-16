#include "NarrowBodyPlane.h"

void NarrowBodyPlane::fillSeatsArray()
{
    seatsArray = new bool* [seatsRows];

    for (int i = 0; i < seatsRows; i++)
    {
        seatsArray[i] = new bool[seatsCols];
    }
}

void NarrowBodyPlane::initFalseValues() {
    for (int row = 0; row < seatsRows; row++)
    {
        for (int col = 0; col < seatsCols; col++)
        {
            seatsArray[row][col] = false;
        }
    }
}