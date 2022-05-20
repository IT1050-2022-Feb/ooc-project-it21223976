#include <iostream>
#include "Payment.h"
Payment::Payment(const int cPaymentID, char cPaymentType, double cPaymentAmount, int cCustomerID)

{	
	stpcpy_s(PaymentType, cPaymentType);
	PaymentID = cPaymentID;
	PaymentAmount = cPaymentAmount;
	CustomerID = cCustomerID;	
}

void Payment::AddPayDetails()
{
	
}
void Payment::ViewPayDetails()
{
	
}
Payment::~Payment()
{
	
}
