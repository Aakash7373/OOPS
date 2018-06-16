//============================================================================
// Name        : Operatoroverloading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include<string>
#include"Operatoroverloading.h"
using namespace std;



Sally::Sally()
{

}

Sally::Sally(int n)
{
num=n;
}

Sally Sally::operator+(Sally s)
{
	Sally s1;
	s1.num=num+s.num;
	return(s1);
}
