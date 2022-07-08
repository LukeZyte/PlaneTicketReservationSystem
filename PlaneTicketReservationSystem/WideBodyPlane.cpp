#include "WideBodyPlane.h"

//void WideBodyPlane::initSeatsArray()
//{
//	seatsArray = new Customer** [seatsLevels];
//
//	for (int level = 0; level < seatsLevels; level++)
//	{
//		seatsArray[level] = new Customer* [seatsRows];
//
//		for (int row = 0; row < seatsRows; row++)
//		{
//			seatsArray[level][row] = new Customer [seatsCols];
//		}
//	}
//}

void WideBodyPlane::initSeatsVector()
{
    for (int level = 0; level < seatsLevels; level++)
    {
        std::vector<std::vector<Customer>> v2d;
        for (int row = 0; row < seatsRows; row++)
        {
            std::vector<Customer> v1d;
            for (int col = 0; col < seatsCols; col++)
            {
                v1d.push_back(Customer(NULL, "", "", NULL, ""));
            }
            v2d.push_back(v1d);
        }
        seatsVector.push_back(v2d);
    }
}