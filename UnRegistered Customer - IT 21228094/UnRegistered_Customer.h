#include<iostream>
class UnRegisteredCustomer
{
	protected:
	  char CustomerNIC[10];
	  char CustomerName[50];
	  char CustomerDateOfBirth[10];
	  char CustomerAddress[50];
	 
	public:
	  UnRegisteredCustomer(cont char cCustomerName[]);
	  void setDetails(char cCustomerNIC, char   CustomerDateOfBirth, char CustomerAddress);
	  int getDetails();
	  void Register();
	  void Validation();
	  void CancleRegister();
	  ~UnRegisteredCustomer();
};
