#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cassert>
#include "string_class.h"

using namespace std;

//*********************************************************************************************
//*********************************************************************************************
// string_class.cpp
//*************************************************************************************
//Name: string_class
//Precondition: The state of the object (private data) has not been initialized
//Postcondition: The state has been initialized to an empty string.
//Description: This is the default constructor which will be called automatically when
//an object is declared. It will initialize the state of the class.
//
//*************************************************************************************
string_class::string_class()
{

	current_string = ("");
}
//*************************************************************************************
//Name: string_class
//Precondition: The state of the object has not been initialized.
//Postcondition: The string set to input of user.
//Description: This is the Explicit-Value constructor and will change the state of the object.
//
//
//*************************************************************************************
string_class::string_class(string s)
{
	
	current_string = s;
}

//*************************************************************************************
//Name: palindrome
//Precondition: The state of the object has been initialized.
//Postcondition: The function returns whether the class is a palindrome.
//Description: This is the palindrome function. This function will 
//allow the user to know whether their class is the same value if reversed.
//
//*************************************************************************************


bool string_class::palindrome()
{
	int i = 0;
	int j = current_string.length() -1;

	if (current_string.empty())
	{
		return true;
	}
	while (i < j)
	{
		if (current_string[i] != current_string[j])
		{
			return false;
			i++;
			j--;
		}
		else {
			return true;
		}
		return true;
	}
	
}

//*************************************************************************************
//Name: reverse_all
//Precondition: The state of the object has been initialized.
//Postcondition: The function returns the current_string with chosed substring replaced by chosen substring.
//Description: This is the reverse all function. It changes all of the old substring occurences to the new substring.
//
//*************************************************************************************

string string_class::replace_all(string old_substring, string new_substring)
{	
	for (int x = 0; x < current_string.length(); x++)
	{
		int y = 0;
		int z = x - 1; 
		string word;
		while(current_string[x] == old_substring[y])
		{
			if (old_substring[y+1] == '\0')
			{
				word = current_string[z] + old_substring;
				x = x + old_substring.length();
			}
			else
			{
				return current_string;
			}
		}
	}
}

ostream & operator<<(ostream & out, const string_class & string_classObj)
{
	cout << string_classObj.current_string << endl;
	return out;
}