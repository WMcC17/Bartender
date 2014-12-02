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