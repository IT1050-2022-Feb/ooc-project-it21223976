#include <iostream>
class Payment

{
	private:
	 int PaymentID;
	 char PaymentType[10];
	 double PaymentAmount;
	 int CustomerID;
	 
	public:
	 Payment(const int cPaymentID, char cPaymentType, double cPaymentAmount, int cCustomerID);
	 void AddPayDetails();
	 void ViewPayDetails();
	 ~Payment();    
};
