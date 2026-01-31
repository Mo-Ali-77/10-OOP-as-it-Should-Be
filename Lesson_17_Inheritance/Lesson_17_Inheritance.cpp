#include <iostream>
using namespace std;

class  clsPerson
{
	int _ID;
	string _FirstName;
	string _lastName;
	string _Email;
	string _Phone;

public:

	// We created a constructor to solve the problem of 
	// creating an instance in the main function, which is a temporary solution.
	clsPerson()
	{

	}

	clsPerson(int ID, string FirstName, string lastName, string Eamil, string Phone)
	{
		_ID = ID;
		_FirstName = FirstName;
		_lastName = lastName;

		_Email = Eamil;
		_Phone = Phone;
	}


	int ID()
	{
		return _ID;
	}

	void SetFirsitName(string Firsit_Name)
	{
		_FirstName = Firsit_Name;
	}

	string FirsitName()
	{
		return _FirstName;
	}

	void SetLastName(string Last_Name)
	{
		_lastName = Last_Name;
	}

	string LastName()
	{
		return _lastName;
	}

	string FullName()
	{
		return _FirstName + " " + _lastName;
	}

	void SetEamil(string YourEmail)
	{
		_Email = YourEmail;
	}

	string Email()
	{
		return _Email;
	}

	void SendEmai(string Subject, string Body)
	{
		cout << "\nThe following message send successfully to email: " << _Email << endl;
		cout << "Subject: " << Subject << endl;
		cout << "Body: " << Body << endl;
	}

	void SetPhone(string Phone)
	{
		_Phone = Phone;
	}

	string Phone()
	{
		return _Phone;
	}

	void SendSMS(string TextMessage)
	{
		cout << "\nThe following SMS send successfully to phone: " << _Phone << endl;
		cout << "Text Message: " << TextMessage << endl;
	}

	void Print()
	{
		cout << "\nInfo:\n\n";
		cout << "-------------";
		cout << "\nID         : " << _ID;
		cout << "\nFirst Name : " << _FirstName;
		cout << "\nLast Name  : " << _lastName;
		cout << "\nFull Name  : " << FullName();
		cout << "\nPhone      : " << _Phone << endl;
		cout << "-------------\n";
	}
};

class  clsEmployee : public clsPerson
{
	string _Title;
	string _Department;
	double _Salary;

public:

	string Title()
	{
		return _Title;
	}

	void SetSalary(double Salary)
	{
		_Salary = Salary;
	}

	double Salary()
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
};

int main()
{
	clsEmployee Employee1;
	Employee1.SetFirsitName("Ali");
	Employee1.SetLastName("Othman");
	Employee1.Print();

	system("pause>0");
	return 0;
}