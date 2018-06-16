//============================================================================
// Name        : Friendfunction.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>

using namespace std;

class Friend{

private:
	int value;
	friend void printvalue(Friend &);

public:
	Friend()
{
		value=0;
}
};


void printvalue(Friend &f)
{
	f.value=100;
	cout<<f.value<<endl;
}

int main()
{
	Friend f;
	printvalue(f);


	return 0;
}
