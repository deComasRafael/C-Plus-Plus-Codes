#include <iostream>
#include <string>
#include "date.h"
#include <iomanip>
using namespace std;

//*********************************************************************************************
//*********************************************************************************************
// D A T E D R I V E R . C P P
//EXAMPLE OF PROGRAM HEADER
/********************************************************************************************
Name: Rafael de Comas Z#: z23352158
Course: Date Structures and Algorithm Analysis (COP3530)
Professor: Dr. Lofton Bullard
Due Date: My 29, 2019 Due Time: 11:59pm
Total Points: 100
Assignment 3: Date program
Description:
*********************************************************************************************/
int main()
{
	Date myDate;
	Date yourDate(12, 31, 1957);
	Date test1Date(15, 1, 1962); //should generate error message that bad month
	Date test2Date(2, 29, 1956); //ok, should say leep year
	Date test3Date(2, 30, 1956); //should generate error message that bad day
	Date test4Date(12, 31, 0000); //should generate error message that bad year
	Date test5Date(80, 40, 0000); //should generate error message that bad month, day and year
	yourDate.display();
	cout<<yourDate.getMonth()<<endl;
	cout<<yourDate.getDay()<<endl;
	cout<<yourDate.getYear()<<endl;
	myDate.setMonth(11);
	myDate.setDay(12);
	myDate.setYear(2015);
	cout<<"myDate: "<<myDate<<" test2Date: "<<test2Date<<" yourDate: "<<yourDate<<endl;
	return 0;
}