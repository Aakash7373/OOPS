/*
 * Birthday.cpp
 *
 *  Created on: Apr 23, 2018
 *      Author: pawar
 */

#include <iostream>
#include<string>
#include"Birthday.h"
using namespace std;

Birthday::Birthday(int d,int m,int y)
{
day=d;
month=m;
year=y;
}


void Birthday::printdate()
{
cout<<day<<"/ "<<month<<"/ "<<year<<".";
}
