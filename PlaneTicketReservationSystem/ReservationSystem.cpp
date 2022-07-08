#include "ReservationSystem.h"

#include <iostream>
#include <fstream>
#include <string>

void ReservationSystem::initData()
{
	loadCustomers();
}

void ReservationSystem::loadCustomers()
{
	std::string _pesel, name, surname, _age, nationality;
	//int pesel, age;

	std::ifstream file("./database/Customers.txt");
	if (file.is_open())
	{
		while (!file.eof())
		{
			
			std::getline(file, _pesel, '\t');
			if (_pesel == "") return;
			std::getline(file, name, '\t');
			std::getline(file, surname, '\t');
			std::getline(file, _age, '\t');
			std::getline(file, nationality , '\n');
			std::cout << _pesel << name << surname << _age << nationality << std::endl;
		}
	}
	else {
		std::cout << "Failed to load a file 'Customers.txt'!" << std::endl;
	}
}