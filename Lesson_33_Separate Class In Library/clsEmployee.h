#pragma once
#include<iostream>
#include "clsPerson.h"
using namespace std;

class  clsEmployee : public clsPerson
{
	string _Title;
	string _Department;
	float _Salary;

public:

	clsEmployee(int ID, string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary) : clsPerson(ID, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}

	string Title()
	{
		return _Title;
	}

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	float Salary()
	{
		return _Salary;
	}

	void SetDepartment(string Department)
	{
		_Department = Department;
	}

	string Department()
	{
		return _Department;
	}

	// Function Overriding 
	void Print()
	{
		cout << "\nInfo:\n";
		cout << "-------------";
		cout << "\nID         : " << ID();
		cout << "\nFirst Name : " << FirstName();
		cout << "\nLast Name  : " << LastName();
		cout << "\nFull Name  : " << FullName();
		cout << "\nPhone      : " << Phone();
		cout << "\nTitle      : " << _Title;
		cout << "\nDepartment : " << _Department;
		cout << "\nSalary     : " << _Salary;
		cout << "\n-------------\n";
	}

};

