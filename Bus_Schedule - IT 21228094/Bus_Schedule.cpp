#include <iostream>
#include "BusSchedule.h"

BusSchedule::BusSchedule(const int cbus_id, int carrival_time, int cdeparture_time, int cschedule_date, char cstart _point, char cend_point)
{
  bus_id = cbus_id;
  arrival_time = carrival_time;
	departure_time = cdeparture_time;
	schedule_date = cschedule_date;
	stpcpy_s(start _point, cstart _point);
	stpcpy_s(end_point, cend_point);
}
void BusSchedule::AddDetails()
{
	
}
void BusSchedule::UpdateDetails()
{
	
}
void BusSchedule::ViewDetails()
{
	
}
void BusSchedule::DeleteDetails()
{
	
}
BusSchedule::~BusSchedule()
{
	
}
