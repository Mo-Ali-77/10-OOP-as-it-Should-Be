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

	string FirstName()
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
		cout << "\nInfo: Person\n";
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

	// Function Overriding 
	void Print()
	{
		cout << "\nInfo: Employee\n";
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

class clsDeveloper : public clsEmployee
{
	string _MainProgrmmingLanguage;

public:

	clsDeveloper(int ID, string FirstName, string LastName, string Email, string Phone,
		string Title, string Department, float Salary, string MainProgrmmingLanguage)
		:clsEmployee(ID, FirstName, LastName, Email, Phone, Title, Department, Salary)
	{
		_MainProgrmmingLanguage = MainProgrmmingLanguage;
	}

	void SetMainProgrmmingLanguage(string MainProgrmmingLanguage)
	{
		_MainProgrmmingLanguage = MainProgrmmingLanguage;
	}

	string MainProgrmmingLanguage()
	{
		return _MainProgrmmingLanguage;
	}

	void Print()
	{
		cout << "\nInfo: Developer\n";
		cout << "--------------------------";
		cout << "\nID                     : " << ID();
		cout << "\nFirst Name             : " << FirstName();
		cout << "\nLast Name              : " << LastName();
		cout << "\nFull Name              : " << FullName();
		cout << "\nPhone                  : " << Phone();
		cout << "\nTitle                  : " << Title();
		cout << "\nDepartment             : " << Department();
		cout << "\nSalary                 : " << Salary();
		cout << "\nMainProgrmmingLanguage : " << _MainProgrmmingLanguage;
		cout << "\n------------------------\n";
	}

};

int main()
{
	clsPerson Person1(1, "Ali", "Alaa", "ali@MoAli.com", "772033645");
	Person1.Print(); // Level 1

	clsEmployee Employee1(1, "Mohammed", "Jamal", "Mohammedjamal@MoAli.com", "700669522", "Full Stack", "CS", 950000);
	Employee1.Print(); // Level 2


	clsDeveloper Developer1(1, "Mohammed", "Ali", "info@MoAli.com", "730408246", "PWN", "CyberSecurity", 900000, "C++");
	Developer1.Print(); // Level 3


	system("pause>0");
	return 0;
}