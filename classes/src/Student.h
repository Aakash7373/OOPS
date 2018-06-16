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
	string name;

public:
	Student();

	~Student();
	Student(string);


	void setname(string );
	string getname();

	void grades();
	void address() const;


};


#endif /* STUDENT_H_ */
