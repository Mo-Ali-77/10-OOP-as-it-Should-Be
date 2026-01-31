#include <iostream>
using namespace std;

class clsPerson
{
private:
	int _ID = 10;
	string _FirstName;
	string _LastName;
	short _Age;
	float _Salary;


public:
	
	int ID()
	{
		return _ID;
	}

	void SetFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}

	string FirstName()
	{
		return _FirstName;
	}

	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string LastName()
	{
		return _LastName;
	}

	string FullName()
	{
		return _FirstName + " " + _LastName;
	}

	void SetSalary(float Salary)
	{
		_Salary = Salary;
	}

	float Salary()
	{
		return _Salary;
	}

	void SetAge(short Age)
	{
		_Age = Age;
	}

	short Age()
	{
		return _Age;
	}
};


int main()
{
	clsPerson Person1, Person2;
	Person1.SetFirstName("Mohammed");
	Person1.SetLastName("Al-amoudi");

	Person2.SetFirstName("Mohammed");
	Person2.SetLastName("Abu-Hadhoud");

	cout << "ID: " << Person1.ID() << endl;
	cout << "Name: " << Person1.FullName() << endl;
	Person1.SetAge(23);
	cout << "Age: " << Person1.Age() << endl;
	Person1.SetSalary(9000.50);
	cout << "Salary: " << Person1.Salary() << endl;

	cout << "ID: " << Person2.ID() << endl;
	cout << endl << "Name: " << Person2.FullName() << endl;
	Person2.SetAge(48);
	cout << "Age: " << Person2.Age() << endl;
	Person2.SetSalary(10000.80);
	cout << "Salary: " << Person2.Salary();



	system("pause>0");
	return 0;
}