#pragma once
#include <string>

class Customer
{
	int pesel;
	std::string name;
	std::string surname;
	int age;
	std::string nationality;

public:
	Customer() : pesel(NULL), name(""), surname(""), age(NULL), nationality("") {};
	Customer(int _pesel, std::string _name, std::string _surname, int _age, std::string _nationality) : pesel(_pesel), name(_name), surname(_surname), age(_age), nationality(_nationality) {};

	int getPesel()
	{
		return pesel;
	}
};

