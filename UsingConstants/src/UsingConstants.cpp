//============================================================================
// Name        : UsingConstants.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include"Student.h"
using namespace std;



Student::Student(int n,int b):val1(n),val2(b)
{

}

Student::~Student()
{

}

void Student::sum()
{
	cout<<"Sum is:"<<val1+val2<<endl;

}
