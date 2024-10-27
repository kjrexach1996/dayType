//dayType.h - the specification file for the dayType class.

#include <string>
using namespace std;

class dayType
{
public:

	//Function should expect both a dayType object to exist and to receive 
	//an integer to change the value of currentDay as a parameter.
	//Function should change the value of the currentDay value to the user-supplied parameter
	//while the parameter is acceptable; function should display an error message should the
	//parameter provided be less than 0 or more than 6.
	void setDay(int);

	//Function should expect both a dayType object to exist and the object's daysOfWeek
	//member to be accessible; function must also receive an integer used to access the 
	//member array.
	//Function will print out a day of the week according to integer provided; integer must
	//be between 0-6, inclusive.
	void printDay(int);

	//Function should expect both a dayType object to exist and the object's daysOfWeek
	//member to be accessible.
	//Function will call the printDay() function and pass the object's currentDay value 
	//to the printDay() function; function will output the specific object's current day;
	//currentDay must be between 0-6, inclusive.
	void getDay();

	//Function should expect both a dayType object to exist and the object's private
	//members to be accessible.
	//Function will output a day of the week according to the currentDay value; the day outputted
	//will be accessed by incrementing currentDay by 1 and accessing the corresponding index in the
	//daysOfWeek array; the week should wrap back around should the day after incrementing currentDay
	//by 1 be greater than 6.
	void nextDay();

	//Function should expect both a dayType object to exist and the object's private
	//members to be accessible.
	//Function will output a day of the week according to the currentDay value; the day outputted
	//will be accessed by decrementing currentDay by 1 and accessing the corresponding index in the
	//daysOfWeek array; the week should wrap back around should the day after decrementing currentDay
	//by 1 be less than 0.
	void previousDay();

	//Function should expect both a dayType object to exist and the object's currentDay
	//member to be accessible; the function should also expect to receive an integer to calculate
	//which day of the week it will be once the calculation is made.
	//Function will return the corresponding day of the week once number of days has been added; to access
	//the correct day, the final result must be between 0-6, inclusive.
	void addDays(int);

	//Function will act as a constructor for dayType object using a default parameter; the dayType object
	//created will have a currentDay value of 0.
	dayType();

	//Function will act as a constructor for dayType object using a user-supplied parameter; the dayType object
	//created will have a currentDay value of the parameter provided; the parameter must be between 0-6, inclusive.
	dayType(int);

private:

	//Variable to represent the day of the week. Used to access the appropriate index in daysOfWeek[] member
	int currentDay;

	//Array containing seven strings, each string representing a day of the week. Variable is static to be accessible
	//to every instance of dayType
	static string daysOfWeek[7];
};
