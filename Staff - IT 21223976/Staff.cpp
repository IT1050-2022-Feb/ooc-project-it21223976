#include <iostream> 
#include "Staff.h"

Staff::Staff(const int cStaffMemID, char cStaffMemNIC[], char cStaffMemName[], char cStaffMemPosition[], char cStaffMemAddress[], int cStaffMemPhone, char cStaffMemEmail[])

{ 
  stpcpy_s(StaffMemNIC, cStaffMemNIC);             
  stpcpy_s(StaffMemName, cStaffMemName);   
  stpcpy_s(StaffMemPosition, cStaffMemPosition);     stpcpy_s(StaffMemAddress, cStaffMemAddress);     
  stpcpy_s(StaffMemEmai, cStaffMemEmai); StaffMemID = cStaffMemID;
  StaffMemPhone = cStaffMemPhone;
}

void Staff::UpdateCusProfile() {
}

void Staff::CheckPayDetails() {
}

void Staff::ConfirmDetails() {
}

void Staff::SendNotifiction() {
}

Staff::~Staff() {
}
