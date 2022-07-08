#include "NarrowBodyPlane.h"

//void NarrowBodyPlane::initSeatsArray()
//{
//    seatsArray = new Customer* [seatsRows];
//
//    for (int i = 0; i < seatsRows; i++)
//    {
//        seatsArray[i] = new Customer [seatsCols];
//    }
//}

void NarrowBodyPlane::initSeatsVector()
{
    std::vector<std::vector<Customer>> v2d;
    for (int row = 0; row < seatsRows; row++)
    {
        std::vector<Customer> v1d;
        for (int col = 0; col < seatsCols; col++)
        {
            v1d.push_back(Customer(NULL, "", "", NULL, ""));
        }
        seatsVector.push_back(v1d);
    }
}