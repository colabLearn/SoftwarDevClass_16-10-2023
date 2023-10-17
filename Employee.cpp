#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(string inName, int inID)
{
	name = inName;
	id = inID;
}
string Employee::getName() 
	{ return this->name; }
void Employee::setName(string inName) 
	{ this->name = inName; }
int Employee::getId() { return  this->id; }
void Employee::setId(int inID) { this->id = inID; }
void Employee::printInfo()
{
	cout << "Name: " << getName() << endl;
	cout << "Id: " << getId << endl;
}
