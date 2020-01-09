#ifndef WORD_H
#define WORD_H

#include <iostream>
#include <string>
using namespace std;

class character
{
public:
	char symbol;
	character *next;

	character(char c)
	{
		symbol = c;
		next = 0;
	}

};

class WORD
{
public:
	bool IsEmpty();

	//Length: Determines the length of the word A; remember A is the current object;
	int Length();

	//Overload the insertion operator as a friend function with chaining to print a word A;
	friend ostream & operator<<(ostream & out, const WORD &);

	// Overload the assignment operator as a member function to take a
	// string (C-style or C++ string, just be consistent in your implementation) as an argument and
	//assigns its value to A, the current object;
	void operator=(const string & s);

	// Overload the assignment operator as a member function with chaining to take a word
	//object as an argument and assigns its value to A, the current object;
	WORD & operator=(const WORD & w);

	//Overload the ‘+” operator as a member function without chaining to add word B
	//(adds the set of symbols that makep B's linked list to the back of A's linked list) to the back of word A;
	//remember A is the current object;
	void operator+(const WORD & B);

	//The default constructor will initialize your state variables.
	//The front of the linked list is initially set to NULL or 0; this implies a non-header node
	//implementation of the link list.
	WORD();

	//Explicit-value constructor: This constructor will have one argument;
	//a C-style string or a C++ string representing the word to be created;
	WORD(const string & s);

	// Copy Constructor: Used during a call by value, return, or initialization/declaration of a word object;
	WORD(const WORD & org);

	//Destructor: The destructor will de-allocate all memory allocated for the word. Put the message
	//"destructor called\n" inside the body of the destructor.
	~WORD();

	// Returns true if two word objects are equal; otherwise false; remember A is the current
	bool IsEqual(const WORD & B);
private:
	character *front, *back;
	int count;
	void add(char c);
};
#endif
#pragma once
