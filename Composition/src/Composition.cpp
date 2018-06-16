//============================================================================
// Name        : Composition.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include"Birthday.h"
#include"People.h"
using namespace std;

int main()
{
	Birthday bb(12,8,1992);
	People p("Akash's  ",bb);
	p.printinfo();
	return 0;
}
