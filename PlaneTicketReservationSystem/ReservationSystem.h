#pragma once

#include <iostream>
#include <string>
#include <vector>

#include "Planes.h"
#include "Customer.h"
#include "Ticket.h"

class ReservationSystem
{
	std::vector<Customer> customers;
	std::vector<Planes> planes;
	std::vector<Ticket> tickets;

public:
	ReservationSystem()
	{
		initData();
	}

	void initData();
	void loadCustomers();
	void mainMenu();
};

