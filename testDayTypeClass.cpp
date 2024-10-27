//testDayTypeClass.cpp : This file will serve as a test file to test the
//functions of the dayType class.

#include <iostream>
#include "dayType.h"

using namespace std;

int main()
{
	//Initialize dayType objects
	dayType myDay;
	dayType yourDay(2);

	//Displaying values of dayType objects
	cout << "Value of dayType object myDay created with default parameter \'0\': " << endl;
	cout << "myDay: ";
	myDay.getDay();
	cout << endl << endl;

	cout << "Value of dayType object yourDay created with user-supplied parameter \'2\': " << endl;
	cout << "yourDay: ";
	yourDay.getDay();
	cout << endl << endl;

	//Setting the value of dayType object myDay using setDay() function
	cout << "Changing value of myDay object using setDay(): " << endl;
	cout << "Executing myDay.setDay(5)" << endl;
	myDay.setDay(5);
	cout << "myDay: ";
	myDay.getDay();
	cout << endl << endl;

	cout << "Executing myDay.setDay(3)" << endl;
	myDay.setDay(3);
	cout << "myDay: ";
	myDay.getDay();
	cout << endl << endl;

	//Showing all possible dayType object values using printDay() function and providing acceptable parameters
	cout << "Displaying all possible dayType object values using printDay(): " << endl;
	cout << "myDay.printDay(0): ";
	myDay.printDay(0);
	cout << endl;
	cout << "myDay.printDay(1): ";
	myDay.printDay(1);
	cout << endl;
	cout << "myDay.printDay(2): ";
	myDay.printDay(2);
	cout << endl;
	cout << "myDay.printDay(3): ";
	myDay.printDay(3);
	cout << endl;
	cout << "myDay.printDay(4): ";
	myDay.printDay(4);
	cout << endl;
	cout << "myDay.printDay(5): ";
	myDay.printDay(5);
	cout << endl;
	cout << "myDay.printDay(6): ";
	myDay.printDay(6);
	cout << endl << endl;

	//Creating a dayType object with an unacceptable parameter
	cout << "Attempting to create a dayTime object using values outside of acceptable parameters: " << endl;
	cout << "Executing dayType wrongDay(7)" << endl;
	dayType wrongDay(7);
	cout << endl << endl;

	//Testing getDay(), nextDay(), and previousDay() functions
	cout << "Finding the current day using getDay():" << endl;
	cout << "Current day: ";
	myDay.getDay();
	cout << endl << endl;

	cout << "Finding the next day using nextDay():" << endl;
	cout << "Next day: ";
	myDay.nextDay();
	cout << endl << endl;

	cout << "Finding the previous day using previousDay():" << endl;
	cout << "Previous day: ";
	myDay.previousDay();
	cout << endl << endl;

	//Setting value of myDay object to "Saturday" and testing above functions
	cout << "Setting myDay to \"Saturday\":" << endl;
	myDay.setDay(6);
	cout << "Current day: ";
	myDay.getDay();
	cout << endl << endl;

	cout << "Finding the next day using nextDay():" << endl;
	cout << "Next day: ";
	myDay.nextDay();
	cout << endl << endl;

	cout << "Finding the previous day using previousDay():" << endl;
	cout << "Previous day: ";
	myDay.previousDay();
	cout << endl << endl;

	//Setting value of dayType object to Monday and adding four days to change it to Friday
	cout << "Setting myDay to \"Monday\":" << endl;
	myDay.setDay(1);
	cout << "myDay: ";
	myDay.getDay();
	cout << endl << endl;

	cout << "Adding four days to myDay object using addDays(4):" << endl
		<< "myDay.addDays(4)" << endl;
	myDay.addDays(4);
	cout << "myDay: ";
	myDay.getDay();
	cout << endl << endl;

	//Setting value of dayType object to Tuesday and adding 13 days to change it to Monday
	cout << "Setting myDay to \"Tuesday\":" << endl;
	myDay.setDay(2);
	cout << "myDay: ";
	myDay.getDay();
	cout << endl << endl;

	cout << "Adding 13 days to myDay object using addDays(13):" << endl
		<< "myDay.addDays(13)" << endl;
	myDay.addDays(13);
	cout << "myDay: ";
	myDay.getDay();
	cout << endl << endl;
	
}