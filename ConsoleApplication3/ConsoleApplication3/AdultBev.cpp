#ifndef _ADULTBEV_CPP_
#define _ADULTBEV_CPP_


#include "AdultBev.h"
#include<iostream>
#include<string>
using namespace std;

bool AdultBev::Underage(){
	int age;
	cout << "Enter your age please.\n";
	cin >> age;
	if (age < 21){ return true; }
	else return false;

}



void AdultBev::mix(){}

AdultBev VirginAlt(){}

#endif