/*
 * main.cpp
 *
 *  Created on: Apr 25, 2018
 *      Author: pawar
 */
#include <iostream>
#include<string>
#include"Operatoroverloading.h"
using namespace std;



int main()
{
	Sally s;
	Sally a(100);
	Sally b(200);
	s=a+b;
	cout<<s.num<<endl;

	return 0;
}




