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
	float _Salary;

public:

	clsEmployee(int ID,string FirstName, string LastName, string Email, string Phone, string Title, string Department, float Salary) : clsPerson(ID, FirstName, LastName, Email, Phone)
	{
		_Title = Title;
		_Department = Department;
		_Salary = Salary;
	}

	string Title()
	{
		return _Title;
	}

	void SetSalary(double Salary)
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
};

int main()
{
	clsEmployee Employee1(10, "Mohammed", "Ali",  "Info@MoAli.com", "730408246", "CEO", "CyberSecurity", 900000);
	
	// Why can't we print Salary, Title, or Department on the screen?
	// Because the Print function is outdated and exists in the parent class, it must be deleted and another one created in the child class.
	// We will solve this problem in the next lesson.
	// However, the data is stored in Member data in the child class.
	Employee1.Print();


	system("pause>0");
	return 0;
}