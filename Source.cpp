#include <iostream>
#include <exception>
#include <string>
#include <conio.h>
#include "Employeelist.h"

using namespace std;

int displayMEnu()
{
	int check;
	cout << "\t********* MENU ***********" << endl;
	cout << "1 - Add Employee to list\n2 - View Employee List\n3 - Exit" << endl;
	cin >> check;
	//cin.get();
	return check;
}
int main()
{
	EmployeeList info;
	int id = 0;
	int check = 0;
		string fn, ln, d;
		bool stat = true;

		//do
		//{
			check = displayMEnu();
			//cin.get();
			switch (check)
			{
			case 1:
				cout << "Enter Employee ID#:\t" << endl;
				cin >> id;
				cout << "Enter Department:\t" << endl;
				getline(cin, d);
				cin.ignore();
				cout << "Enter Employee First Name:\t" << endl;
				getline(cin, fn);
				cin.ignore();
				cout << "Enter Employee Last Name:\t" << endl;
				getline(cin, ln);
				cin.ignore();
				try
				{
					info.createEmployee(id, d, fn, ln, stat);
					check++;
				}
				catch (const std::exception&)
				{
					cout << "Employee Not added" << endl;
				}

				break;
			case 2:
				try
				{
					info.DisplayList();
				}
				catch (const std::exception&)
				{

				}
				break;
			case 3:
				exit(0);
				break;

			}
		//} while (true);
		
	return 0;
}