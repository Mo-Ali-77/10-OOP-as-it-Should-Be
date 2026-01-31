#include<iostream>
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
		return _FirstName + " " +  _lastName;
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


//int main()
//{
//	clsPerson Person1(10, "Mohammed", "Ali", "alamoudimohammedali@gmail.com", "+967 730408246");
//	Person1.Print();
//
//	Person1.SendEmai("Hi MO", "Where are you ?");
//	Person1.SendSMS("MO, Are you OK ?");
//
//
//	system("pause>0");
//	return 0;
//}