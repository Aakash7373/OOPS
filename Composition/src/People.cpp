/*
 * People.cpp
 *
 *  Created on: Apr 23, 2018
 *      Author: pawar
 */


#include <iostream>
#include<string>
#include"People.h"
//#include"Birthday.h"
using namespace std;

People::People(string x,Birthday bo):
name(x),bday(bo)
{

}

void People::printinfo()
{
cout<<name<<"Date of birth is: ";
bday.printdate();
}
