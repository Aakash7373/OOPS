/*
 * main.cpp
 *
 *  Created on: Apr 23, 2018
 *      Author: pawar
 */

#include <iostream>
#include<string>
#include"Student.h"
using namespace std;



int main()
{
	Student s;
Student *p=&s;

Student s1("Hello hi");
p->grades();
p->setname("Akash Pawar\n");
cout<<p->getname();
cout<<s1.getname();
cout<<endl;

const Student a;
a.address();

	return 0;
}
