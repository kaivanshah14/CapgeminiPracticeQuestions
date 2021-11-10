// C++ program two find number of
// days between two given dates
#include <iostream>
using namespace std;

// A date has day 'd', month 'm' and year 'y'
struct Date {
	int d, m, y;
};

// To store number of days in
// all months from January to Dec.
const int monthDays[12]
	= { 31, 28, 31, 30, 31, 30,
	31, 31, 30, 31, 30, 31 };

// This function counts number of
// leap years before the given date
int countLeapYears(Date d)
{
	int years = d.y; // 2000

	// Check if the current year needs to be
	// considered for the count of leap years
	// or not
	if (d.m <= 2) // 11<=2 ? NO
		years--;

	// An year is a leap year if it
	// is a multiple of 4,
	// multiple of 400 and not a
	// multiple of 100.
	return years / 4 // 2000/4 - 2000/100 + 2000/400 = 485
		- years / 100
		+ years / 400;
}

// This function returns number of
// days between two given dates
int getDifference(Date dt1, Date dt2)
{
	// COUNT TOTAL NUMBER OF DAYS
	// BEFORE FIRST DATE 'dt1'

	// initialize count using years and day
	long int n1 = dt1.y * 365 + dt1.d; // 2000*365 + 14 = 730014

	// Add days for months in given date
	for (int i = 0; i < dt1.m - 1; i++)
		n1 += monthDays[i]; // 730014 + 304 = 730318

	// Since every leap year is of 366 days,
	// Add a day for every leap year
	n1 += countLeapYears(dt1); // 730318 + 485 = 730803

	// SIMILARLY, COUNT TOTAL NUMBER OF
	// DAYS BEFORE 'dt2'

	long int n2 = dt2.y * 365 + dt2.d; // 737679
	for (int i = 0; i < dt2.m - 1; i++)
		n2 += monthDays[i]; // 737983
	n2 += countLeapYears(dt2); // 737983 + 490 = 738473

	// return difference between two counts
	return (n2 - n1); // 738473 - 730803 = 7670
}

// Driver code
int main()
{
	Date dt1 = { 14, 11, 2000 };
	Date dt2 = { 14, 11, 2021 };

	// Function call
	cout << "Difference between two dates is "
		<< getDifference(dt1, dt2);

	return 0;
}
