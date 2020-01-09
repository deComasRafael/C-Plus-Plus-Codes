#include "word.h"
using namespace std;
int main()
{
	WORD you;
	cout << "************TEST#1*******************************\n";
	cout << "Testing the default constructor and printing empty word\n";
	cout << "The length of you is " << you.Length() << "\n";

	cout << "************TEST#2*******************************\n";
	WORD me("AAAA0000AAA0000AAA");
	cout << "Testing the explicit-value constructor\n";
	cout << "me is \n" << me << "\n";

	cout << "************TEST#3*******************************\n";
	WORD them = me;
	cout << "Testing the copy constructor\n";
	cout << "them is \n" << them << "\n";

	cout << "************TEST#4*******************************\n";
	cout << "Testing length\n";
	cout << "The length of me is " << me.Length() << "\n";

	cout << "************TEST#5*******************************\n";
	WORD us;
	us = "AA";
	cout << "Testing operator= by assignment the value of \"AA\" to use\n";
	cout << "The word us is \n" << us << "\n";

	cout << "************TEST#6*******************************\n";
	WORD everyone = "hello world\n";
	cout << "Testing operator= by assignment the value of \"hello world\" to use\n";
	cout << "The word everyone is \n" << everyone << "\n";

	cout << "************TEST#7*******************************\n";
	WORD our, him;

	our = "AAA000AAA000";
	us = "XXXX";

	cout << "Testing IsEqual by testing to see inf us is equal to our \n";
	if (our.IsEqual(us))
		cout << "The 2 words are equal\n";
	else
		cout << "The 2 words are not equal\n";

	cout << "TEST SHOULD REVEAL THAT our AND us are not equal\n";

	cout << "************TEST#8*******************************\n";
	cout << "Adding 2 words by adding us to the back of their. Their is the current object \n";
	WORD their("AAAA0000AAA0000AAA");
	their + us;
	cout << "their followed by us is \n" << their << "\n";

	cout << "************TEST#9*******************************\n";
	cout << "Adding 2 words, their2 is empty, by adding us to the back of their. Their is the current object \n";
	WORD their2("");
	their2 + us;
	cout << "their followed by us is \n" << their2 << "\n";

	cout << "************TEST#10*******************************\n";
	cout << "Adding 2 words, their3 is empty, by adding us to the back of their. Their is the current object \n";
	WORD their3("");
	us + their3;
	cout << "us followed by empty their3 is \n" << their3 << "\n";

	system("pause"); // for Microsoft Visual Studio
	return 0;
}