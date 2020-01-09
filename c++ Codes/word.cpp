#include "word.h"

//default Constructor
WORD::WORD()
{
	front = 0;
	back = 0;
}

//Explicit-value constructor
WORD::WORD(const string &s)
{
	front = 0;
	count = 0;

	for (int i = 0; i < s.length(); i++)
		add(s.at (i));
}

// Copy Constructor
WORD::WORD(const WORD& org)
{
	front = 0;
	count = 0;
	character *cur = org.front;
	while (cur != 0)
	{
		add(cur->symbol);
		cur = cur->next;
	}
}

//Destructor
WORD::~WORD()
{
	front = 0;
	count = 0;

	delete front;
}

//to check if the word is empty
bool WORD::IsEmpty()
{
	return (front == 0);
}

//to get the length of the word
int WORD::Length()
{
	return count;
}

//Overload the insertion operator as a friend function with chaining to print a word A;
ostream& operator<<(ostream& out, const WORD& word)
{
	character *cur = word.front;

	while (cur != 0)
	{
		out << cur->symbol << " ";
		cur = cur->next;
	}
	return out;
}

// Overload the assignment operator
void WORD::operator=(const string & s)
{
	front = 0;
	count = 0;

	for (int i = 0; i < s.length(); i++)
		add(s.at (i));
}

// Overload the assignment operator
WORD& WORD::operator=(const WORD& w)
{
	//if word is empty, return the word
	if (w.front == 0)
		return *this;

	//to assign the current word to W
	if (this != &w)
	{
		front = 0;
		count = 0;

		//assign the cur to front of w
		character *cur = w.front;

		//while the cur is not 0, add one by one character
		while (cur != 0)
		{
			add(cur->symbol);
			cur = cur->next;
		}
	}
	return *this;
}

void WORD::operator+(const WORD& B)
{
	character *cur = B.front;

	while (cur != 0)
	{
		add(cur->symbol);
		cur = cur->next;
	}
}

//to check if the two words are equal
bool WORD::IsEqual(const WORD& B)
{
	if (count != B.count)
		return false;
	character *cur_A = front;
	character *cur_B = B.front;
	while (cur_A != 0 && cur_B != 0)
	{
		if (cur_A->symbol != cur_B->symbol)
			return false;

		cur_A = cur_A->next;
		cur_B = cur_B->next;
	}
	return true;
}

//function to add the char to word
void WORD::add(char c)
{
	character *new_node = new character(c);
	if (front == 0)
	{
		front = new_node;
	}
	else
	{
		character *cur = front;
		while (cur->next != 0)
			cur = cur->next;
		cur->next = new_node;
	}
	count++;
}