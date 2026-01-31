#include <iostream>
using namespace std;

class clsEmployee
{
private:
	int _ID = 1;
	string _FirstName;
	string _LastName;
	short _Age;
	float _Salary;

public:

	int ID()
	{
		return _ID;
	}
	//__declspec(property(get = ID)) int ID;


	void SetFistName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string GetFirstName()
	{
		return _FirstName;
	}
	__declspec(property(get = GetFirstName, put = SetFistName)) string FirstName;

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string GetLastName()
	{
		return _LastName;
	}
	__declspec(property(get = GetLastName, put = SetLastName)) string LastName;

	string FullName()
	{
		return FirstName + " " + LastName;
	}
	
	void SetAge(short Age)
	{
		_Age = Age;
	}

	short GetAge()
	{
		return _Age;
	}
	__declspec(property(get = GetAge, put = SetAge)) short Age;

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	float GetSalary()
	{
		return _Salary;
	}
	__declspec(property(get = GetSalary, put = SetSalary)) float Salary;
};


int main()
{
	clsEmployee Employee;
	Employee.FirstName = "Mohammed";
	Employee.LastName = "AlAmoudi";
	Employee.Age = 23;
	Employee.Salary = 9000;


	cout << "ID: " << Employee.ID() << endl;
	cout << "Name: " << Employee.FullName() << endl;
	cout << "Age: " << Employee.Age << endl;
	cout << "Salary: " << Employee.Salary << endl;

	system("pause>0");
	return 0;
}