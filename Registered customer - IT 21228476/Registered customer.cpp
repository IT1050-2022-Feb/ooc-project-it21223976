#include <iostream>
#include "RegisteredCustomer.h"

RegisteredCustomer::RegisteredCustomer(const char cCustomerName[],
int cCustomerID):UnRegisteredCustomer(cCustomerName)

{
	stpcpy_s(CustomerName, cCustomerName);
	CustomerID = cCustomerID;
}

void RegisteredCustomer::AddCustomerDetails()
{
	
}

void RegisteredCustomer::DisplayCustomerDetails()
{
	
}

void RegisteredCustomer::UpdateCustomerDetails()
{
	
}

void RegisteredCustomer::Login()
{
	
}

void RegisteredCustomer::Validation()
{
	
}

void RegisteredCustomer:: ReserveSeat()
{
	
}
void RegisteredCustomer:: SearchBus()
{
	
}
void RegisteredCustomer:: ViewTransDetails()
{
	
}
void RegisteredCustomer:: ViewSchedule()
{
	
}

void RegisteredCustomer::Logout()
{
	
}

RegisteredCustomer::~RegisteredCustomer()
{
	
}
