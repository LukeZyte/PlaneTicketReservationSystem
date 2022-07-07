#pragma once
#include "Planes.h"
#include "Customer.h"

#include <iostream>
#include <string>

// Samolot w¹skokad³ubowy <-- 1pok³adowy 
class NarrowBodyPlane :
    public Planes
{
    // Number of columns and rows of seats
    int seatsCols;
    int seatsRows;

    // 2D array of all seats from bottom left of a plane. (from front to back of a plane)
    //  TRUE -> occupied, 
    //  FALSE -> free
    Customer** seatsArray;

    void initSeatsArray();

public:
    NarrowBodyPlane(int _id, std::string _airlines, std::string _planeModel, int _seatsCols, int _seatsRows) : Planes(_id, _airlines, _planeModel), seatsCols(_seatsCols), seatsRows(_seatsRows)
    {
        initSeatsArray();
    };

    void setSeatsArray(int row, int col, Customer& customer)
    {
        if (row <= seatsRows and row >= 0 and col <= seatsCols and col >= 0)
            seatsArray[row][col] = customer;
        else
            std::cout << "[ ERROR ] Failed to assign a value because its out of array's scope" << std::endl;
    }

    void show()
    {
        for (int row = 0; row < seatsRows; row++)
        {
            for (int col = 0; col < seatsCols; col++)
            {
                if (seatsArray[row][col].getPesel() == NULL)
                    std::cout << "# ";
                else std::cout << "O ";
            }
            std::cout << std::endl;
        }
    }
};

