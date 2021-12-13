#include "std_lib_facilities.h"

struct Date {
	int y, m, d;
};

void init_date(Date& date, int y, int m, int d)
{
	if (y > 0)
		date.y = y;
	else
		error("Invalid year");
	if (m < 12 && m > 0)
		date.m = m;
	else
		error("Invalid month");
	if (d > 0 && d < 32)
		date.d = d;
	else
		error("Invalid day");
}

void add_day(Date& date, int n)
{
	date.d += n;
	if (date.d > 31) 
	{
		date.m++;
		date.d -= 31;
		if (date.m > 12)
		{
			date.y++;
			date.m -= 12;
		}
	}
}

int main()
{


	Date today;
	init_date(today, 2021, 11, 18);

	cout << "Date: " << today.y << ". " << today.m << ". " << today.d << ".\n";

	add_day(today, 25);

	cout << "Date: " << today.y << ". " << today.m << ". " << today.d << ".\n";


	return 0;
}
