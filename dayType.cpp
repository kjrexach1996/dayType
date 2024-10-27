// dayType.cpp : the implementation file for the dayType class.

#include <iostream>
#include <string>
#include "dayType.h"

using namespace std;

void dayType::setDay(int day)
{
	if (day < 0 || day > 6)
		cout << "ERROR! Parameter outside acceptable range.";
	else
		currentDay = day;
}

void dayType::printDay(int num)
{
	cout << daysOfWeek[num];
}

void dayType::getDay()
{
	printDay(currentDay);
}

void dayType::nextDay()
{
	int i = currentDay;
	i++;
	if (i == 7)
	{
		i -= 7;
		printDay(i);
	}
	else
		printDay(currentDay + 1);
}

void dayType::previousDay()
{
	int i = currentDay;
	i--;
	if (i == -1)
	{
		i += 7;
		printDay(i);
	}
	else
		printDay(currentDay - 1);
}

void dayType::addDays(int num)
{
	currentDay = (currentDay + num) % 7;
}

dayType::dayType()
{
	currentDay = 0;
}

dayType::dayType(int num)
{
	setDay(num);
}

string dayType::daysOfWeek[7] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };