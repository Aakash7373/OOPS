/*
 * Student.h
 *
 *  Created on: Apr 23, 2018
 *      Author: pawar
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include<string>

using namespace std;

class Student{

private:

	int val1;
	const int val2;
public:

	Student(int,int);
	~Student();

	void sum();

};





#endif /* STUDENT_H_ */
