/*
 * People.h
 *
 *  Created on: Apr 23, 2018
 *      Author: pawar
 */

#ifndef PEOPLE_H_
#define PEOPLE_H_
#include <iostream>
#include<string>
#include"Birthday.h"
using namespace std;

class People
{
private:
	string name;
	Birthday bday;


public:

	  People(string x,Birthday bo);
	  void printinfo();
};




#endif /* PEOPLE_H_ */
