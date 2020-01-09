#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <cassert>
#include "string_class.h"

int main()
{
	string_class s;
	cout << "****************************************" << endl
		<< "Test#1: tesing default constructor and overloaded operator<< with chaining\n"
		<< s << "1st blank line" << endl << s << "2nd blank line" << endl
		<< "Test#1 Ended" << endl
		<< "****************************************" << endl;
	string_class r("hello");
	cout << "****************************************" << endl
		<< "Test#2: tesing explicit-value constructor and overloaded operator<< with chaining\n"
		<< r << "1st blank line" << endl << r << "2nd blank line" << endl
		<< "Test#2 Ended" << endl
		<< "****************************************" << endl;
	cout << "****************************************" << endl
		<< "Test#3: tesing palindrome\n"
		<< "****************************************" << endl;
	string response = "Y";
	string ss;
	while (response == "Y" || response == "y")
	{
		cout << "Enter String: ";
		cin >> ss;
		string_class main_string(ss);
		if (main_string.palindrome())
		{
			cout << ss << " is a palindrome\n";
		}
		else
		{
			cout << ss << " is not a palindrome\n";
		}
		cout << "Would you like to try another string? (Y or N): ";
		cin >> response;
	}
	cout << "Test#3 Ended" << endl
		<< "****************************************" << endl;
	cout << "****************************************" << endl
		<< "Test#4: tesing replace_all\n"
		<< "****************************************" << endl;
	response = "y";
	string current, old_substring, new_substring;
	while (response == "Y" || response == "y")
	{
		cout << "Enter value for current_string: ";
		cin >> current;
		string_class current_string(current);
		cout << "Enter old_substring: ";
		cin >> old_substring;
		cout << "Enter new_substring: ";
		cin >> new_substring;
		cout << "Current string = " << current << endl
			<< "New string = " << current_string.replace_all(old_substring, new_substring)
			<< endl;
		cout << "Would you like to try another string? (Y or N): ";
		cin >> response;
	}
	cout << "****************************************" << endl
		<< "Test#4: tesing replace\n"
		<< "****************************************" << endl;
	return 0;
}