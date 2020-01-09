#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cassert>
//#include "string_class.h"
using namespace std;

//*********************************************************************************************
// D A T E . h
//This declaration should go in date.h
#ifndef STRING_CLASS_H
#define STRING_CLASS_H
class string_class
{
public:
	string_class(); //default constructor; 
	string_class(string s); //explicit-value constructor to make string the input
	bool palindrome();
	string replace_all(string old_substring, string new_substring);
	friend ostream & operator<<(ostream & out, const string_class & string_classObj);//overloaded operator<< as a friend
																	 //function with chaining
private:
	string current_string;

};
#endif
#pragma once
