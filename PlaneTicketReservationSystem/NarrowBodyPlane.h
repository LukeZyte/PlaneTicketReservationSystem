#pragma once
#include "Planes.h"
#include "Customer.h"

#include <iostream>
#include <vector>
#include <string>

// Samolot w¹skokad³ubowy <-- 1pok³adowy 
class NarrowBodyPlane :
    public Planes
{
    int seatsCols;
    int seatsRows;

    std::vector<std::vector<Customer>> seatsVector;     // [rows][cols]

    void initSeatsVector();

public:
    NarrowBodyPlane(int _id, std::string _airlines, std::string _planeModel, int _seatsCols, int _seatsRows) : Planes(_id, _airlines, _planeModel), seatsCols(_seatsCols), seatsRows(_seatsRows)
    {
        initSeatsVector();
    };

    void setSeatsVector(int row, int col, Customer& customer)
    {
        if (row <= seatsRows and row >= 0 and col <= seatsCols and col >= 0)
            seatsVector[row][col] = customer;
        else
            std::cout << "[ ERROR ] Failed to assign a value because its out of array's scope" << std::endl;
    }

    void show()
    {
        for (int row = 0; row < seatsRows; row++)
        {
            for (int col = 0; col < seatsCols; col++)
            {
                if (seatsVector[row][col].getPesel() == NULL)
                    std::cout << "# ";
                else std::cout << "O ";
            }
            std::cout << std::endl;
        }
    }
};

