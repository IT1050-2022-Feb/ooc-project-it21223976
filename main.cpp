// file created by IT21223976
#include<iostream>
#include "UnRegisteredCustomer.h"
#include "RegisteredCustomer.h"
#include "BusInformation.h"
#include "Ticket.h"
#include "Comment.h"
#include "Payment.h"
#include "Staff.h"
#include "BusSchedule.h"
using namespace std;

int main()
{
	UnRegisteredCustomer*UnRegCustomer;
	UnRegCustomer = new UnRegisteredCustomer();
	UnRegCustomer->setDetails();
	
	RegisteredCustomer*RegCustomer;
	RegCustomer = new RegisteredCustomer();
	RegCustomer->DisplayCustomerDetails();
	RegCustomer->UpdateCustomerDetails();
	
	BusInformation *BInfor;
	BInfor = BusInformation ();
	BInfor ->ViewDetails();
  BInfor ->AddDetails();
  BInfor ->UpdateDetails();
  BInfor ->DeleteDetails();
       
  BusSchedule *BS;
	BS = BusSchedule ();
	BS ->ViewDetails();
  BS ->AddDetails();
  BS ->UpdateDetails();
  BS ->DeleteDetails();	

  Comment*cmnt;
	cmnt =  new Comment();
	cmnt -> ViewComment();
  cmnt -> AddComment();

	Payment*Pay;
	Pay = new Payment();
	Pay->AddPayDetails();
	Pay->ViewPayDetails();
	
	Staff*Stf;
	Stf = new Staff();
	Stf->CheckPayDetails();
	Stf->UpdateCusProfile();
	Stf->ConfirmDetails();
	
	Ticket*Tckt;
	Tckt = new Ticket ();
	Tckt ->ViewTicket ();

  delete UnRegCustomer, RegCustomer, BInfo, BS, cmnt, Pay, Stf, Tckt ;

  return 0;                        
  }

