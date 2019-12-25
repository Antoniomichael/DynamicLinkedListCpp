#pragma once
#include <string>

using namespace std;

class Employee
{
	
		int ID;
		string Department;
		string FirstName;
		string LastName;
		bool UserStatus;
	
	
public:
	//setters
	void setID(int id)
	{
		ID = id;
	}
	void setDepartment(string d)
	{
		Department = d;
	}
	void setFirstName(string fn)
	{
		FirstName = fn;
	}
	void setLastName(string ln)
	{
		LastName = ln;
	}
	void setuserstatus(bool stat)
	{
		UserStatus = stat;
	}
	//Getters
	int getID()
	{
		return ID;
	}
	string getDepartment()
	{
		return Department;
	}
	string getFirstName()
	{
		return FirstName;
	}
	string getLastName()
	{
		return LastName;
	}
	bool getUserStatus()
	{
		return UserStatus;
	}
	//constructor
		 Employee() {
		ID = 0;
		Department = "";
		FirstName = "";
		LastName = "";
		UserStatus = false;
		cout << "Constructed successfully" << endl;
	}
		 ~Employee() { cout << "Destroying class" << endl; }

		 Employee* next = NULL;
};


