#pragma once
#include "Employee.h"
#include <iostream>
#include <string>



class EmployeeList {
	
		Employee* Head;
		Employee* tail;

public:
	EmployeeList()
	{
		Head = NULL;
		tail = NULL;

	}

	void createEmployee(int id,string d,string fn,string ln,bool stat)
	{
		Employee * temp = new Employee;
		temp->setID(id);// = id;
		temp->setDepartment(d);// = d;
		temp->setFirstName(fn);// = fn;
		temp->setLastName(ln);// = ln;
		temp->setuserstatus(stat);// = stat;
		temp->next = NULL;

		if (Head == NULL)
		{
			//Head->next = NULL;
			Head = temp;
			tail = temp;
		}
		else
		{
			tail->next = temp;
			tail = temp;
		}

	}
	void DisplayList()
	{
		Employee* current = Head;
		while (current != NULL)
		{
			cout << "Employee ID:" << current->getID();
			cout << "Department:" << current->getDepartment();
			cout << "Employee Name" << current->getFirstName() << current->getLastName();
			cout << "User Status:" << current->getUserStatus();
		}
	}
		
	
};