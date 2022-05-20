#include <iostream>
class BusInformation
{
	private:
	 int bus_no;
	 int available_seat;
	 int seat_no;
	 int total_seat;
	 
	public:
             BusInformation(const int cbus_no, int cavailable_seat,int cseat_no, int ctotal_seat);
	 void AddDetails();
	 void UpdateDetails();
	 void ViewDetails();
	 void DeleteDetails();
	 ~BusInformation();                       };
