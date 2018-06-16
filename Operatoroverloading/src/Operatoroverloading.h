/*
 * Operatoroverloading.h
 *
 *  Created on: Apr 25, 2018
 *      Author: pawar
 */

#ifndef OPERATOROVERLOADING_H_
#define OPERATOROVERLOADING_H_
#include <iostream>
#include<string>
using namespace std;


class Sally
{


public:
       int num;
	   Sally();
	   Sally(int);
	   Sally operator+(Sally);

};





#endif /* OPERATOROVERLOADING_H_ */
