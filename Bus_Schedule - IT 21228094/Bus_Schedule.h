#include <iostream>
class BusSchedule
{
	private:
	  int bus_id;
	  int arrival_time;
	  int departure_time;
	  int schedule_date;
	  char start _point;
	  char end_point;
	 
	public:
    BusSchedule(const int cbus_id, int carrival_time, int cdeparture_time, int cschedule_date, char cstart _point, char cend_point);
	  void AddDetails();
	  void UpdateDetails();
	  void ViewDetails();
	  void DeleteDetails();
	  ~BusSchedule();
};
