#include <iostream>
#include <string>
#include "date.h"
#include <iomanip>
using namespace std;

//*********************************************************************************************
//*********************************************************************************************
// D A T E . C P P
//This stub (for now) should be implemented in date.cpp
//*************************************************************************************
//Name: Date
//Precondition: The state of the object (private data) has not been initialized
//Postcondition: The state has been initialized to today's date
//Description: This is the default constructor which will be called automatically when
//an object is declared. It will initialize the state of the class
//
//*************************************************************************************
Date::Date()
{
	cout << "The default constructor has been called." << endl;
	myMonth = 01;
	myDay = 01;
	myYear = 0001;
	cout << myMonth << "/" << myDay << "/" << myYear << endl << endl;
	//the code for the default constructor goes here
}
//*************************************************************************************
//Name: Date
//Precondition: The state of the object is going to inputted.
//Postcondition: Date set to input of user.
//Description: This is the Explicit-Value constructor and will change the state of the object.
//
//
//*************************************************************************************
Date::Date(unsigned m, unsigned d, unsigned y)
{
	cout << "Explicit-Value Constructor has been called." << endl;
	if (d < 32) {
		myDay = d;
	}
	else {
		cout << "Invalid Day =" << d << endl << endl;
	}
	if (m == 3 || m == 1 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12 && d < 32 || m == 4 || m == 6 || m == 9 || m == 11 && d < 31 || m == 02 && d < 29)
	{
		myMonth = m;
	}
	else if (m == 02 && d == 29 && y % 4 == 0) {
		myMonth = m;
	}
	else {
		cout << "Invalid Month =" << m << endl << endl;
	}
	if (y != 0) {
		myYear = y;
	}
	else if (y % 4 == 0 && y != 0) {
		myYear = y;
		cout << "It is a leap year." << endl;
	}
	else {
		cout << "Invalid year =" << y << endl << endl;
	}
	if (myMonth == m && myDay == d && myYear == y) {
		cout << myMonth << "/" << myDay << "/" << myYear << endl << endl;
	}
	else {
		return;
	}
}
//*************************************************************************************
//Name: Display
//Precondition: The user wishes to display their current date.
//Postcondition: The user has initialized an object.
//Description: This displays the date to the screen.
//
//
//*************************************************************************************
void Date::display()
{
	if (myDay < 32 && myMonth < 13 && myYear > 0)
	{
		cout << myMonth << "/" << myDay << "/" << myYear << endl << endl;
	}
	else {
		cout << "Invalid Date" << endl;
	}

}
//*************************************************************************************
//Name: getMonth
//Precondition: The user has initialized an object and wishes to see the current state of the month.
//Postcondition: The current month in their object is displayed.
//Description: This is the function that is used to display the month on the screen.
//
//
//*************************************************************************************
int Date::getMonth()
{
	if (myMonth < 13) {
		cout << "";
	}
	else {
		cout << "Invalid Month." << endl;
	}
	return myMonth;
}
//*************************************************************************************
//Name: getDay
//Precondition: The user has initialized an object and wishes to see the current state of the day.
//Postcondition: The current day in their object is displayed.
//Description: This is the function that is used to display the day on the screen.
//
//
//*************************************************************************************
int Date::getDay()
{

	if (myDay < 32) {
		cout << "";
	}
	else {
		cout << "Invalid day." << endl;
	}
	return myDay;
}
//*************************************************************************************
//Name: getYear
//Precondition: The user has initialized an object and wishes to see the current state of the year.
//Postcondition: The current year in their object is displayed.
//Description: This is the function that is used to display the year on the screen.
//
//
//*************************************************************************************
int Date::getYear()
{
	if (myYear > 0) {
		cout << "";
	}
	else {
		cout << "Invalid year." << endl;
	}
	return myYear;
}
//*************************************************************************************
//Name: setMonth
//Precondition: The user has initialized an object and wishes to change the month.
//Postcondition: The user has successfully changed the month of his date to his input.
//Description: This function is used so the user may change the month.
//
//
//*************************************************************************************
void Date::setMonth(unsigned m)
{
	if (myMonth == m)
	{
		cout << "The date's month is already set to that month." << endl;
	}
	else {
		myMonth = m;
	}
}
//*************************************************************************************
//Name: setDay
//Precondition: The user has initialized an object and wishes to change the day.
//Postcondition: The user has successfully changed the day of his date to his input.
//Description: This function is used so the user may change the day.
//
//
//*************************************************************************************
void Date::setDay(unsigned d)
{
	if (myDay == d)
	{
		cout << "The date's day is already set to that day." << endl;
	}
	else {
		myDay = d;
	}
}
//*************************************************************************************
//Name: getYear
//Precondition: The user has initialized an object and wishes to change the year.
//Postcondition: The user has successfully changed the year of his date to his input.
//Description: This function is used so the user may change the year.
//
//
//*************************************************************************************
void Date::setYear(unsigned y)
{
	if (myYear == y)
	{
		cout << "The date's year is already set to that year." << endl;
	}
	else {
		myYear = y;
	}
}
ostream & operator<<(ostream & out, const Date & dateObj)
{
	cout << dateObj.myMonth << "/" << dateObj.myDay << "/" << dateObj.myYear;
	return out;
}