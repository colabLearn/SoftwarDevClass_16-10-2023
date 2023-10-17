#pragma once
#include <string>
using namespace std;
class Employee
{
private:
	string name;
	int id;

public:
	Employee(string inName, int inID);
	string getName();
	void setName(string inName);
	int getId();
	void setId(int inId);
	void printInfo();

	
};

