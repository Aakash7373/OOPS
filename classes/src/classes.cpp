//============================================================================
// Name        : classes.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include"Student.h"
using namespace std;


Student::Student()
{

}
Student::~Student()
{

}


Student::Student(string n)
{
	name=n;
}

void Student::setname(string n)
{
name=n;
}

string Student::getname()
{
return name;
}

void Student::grades()
{
cout<<"Its an A "<<endl;
}

void Student::address() const
{
cout<<"Peques St "<<endl;
}

