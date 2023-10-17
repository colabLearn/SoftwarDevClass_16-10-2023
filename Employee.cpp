#include "Employee.h"

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
void setId();
void printInfo();

