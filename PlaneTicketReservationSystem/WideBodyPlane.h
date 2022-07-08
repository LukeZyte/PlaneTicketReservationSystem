#pragma once
#include "Planes.h"
#include "Customer.h"

#include <string>
#include <vector>
#include <iostream>

// Samolot szerokopok³adowy <-- sekcja VIP, biznesowa, 2pokladowy
class WideBodyPlane :
   public Planes
{
	int seatsCols;
	int seatsRows;
	int seatsLevels;		    // 0 or 1
    std::vector<std::vector<std::vector<Customer>>> seatsVector;    // [level][rows][cols]

	void initSeatsVector();

public:
	WideBodyPlane(int _id, std::string _airlines, std::string _planeModel, int _seatsLevels, int _seatsCols, int _seatsRows) : Planes(_id, _airlines, _planeModel), seatsLevels(_seatsLevels), seatsCols(_seatsCols), seatsRows(_seatsRows)
    {
        initSeatsVector();
    };

    void setSeatsArray(int level, int row, int col, Customer& customer)
    {
        if (row <= seatsRows and row >= 0 and col <= seatsCols and col >= 0 and level <= seatsLevels and level >= 0)
            seatsVector[level][row][col] = customer;
        else
            std::cout << "[ ERROR ] Failed to assign a value because its out of array's scope" << std::endl;
    }

    void show()
    {
        for (int level = 0; level < seatsLevels; level++)
        {
            for (int row = 0; row < seatsRows; row++)
            {
                for (int col = 0; col < seatsCols; col++)
                {
                    if (seatsVector[level][row][col].getPesel() == NULL)
                        std::cout << "# ";
                    else std::cout << "O ";
                }
                std::cout << std::endl;
            }
            std::cout << std::endl;
            std::cout << std::endl;
            std::cout << "PIETRO KOLEJNE" << std::endl;
        }
    }
};

