#include<iostream>
using namespace std;


class clsPerson {

	struct stAddress
	{
		string _AddressLine1;
		string _AddressLine2;
		string _City;
		string _Country;
	};

	string _FullName;
	stAddress _Address;

public:
	
	clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country)
	{
		_FullName = FullName;
		_Address._AddressLine1 = AddressLine1;
		_Address._AddressLine2 = AddressLine2;
		_Address._City = City;
		_Address._Country = Country;
	}

	void SetFullName(string FullNmae)
	{
		_FullName = FullNmae;
	}

	string FullName()
	{
		return _FullName;
	}

	void SetAddress(string AddressLine1, string AddressLine2, string City, string Country)
	{
		_Address._AddressLine1 = AddressLine1;
		_Address._AddressLine2 = AddressLine2;
		_Address._City = City;
		_Address._Country = Country;
	}

	void SetAddressLine1(string AddressLine1)
	{
		_Address._AddressLine1 = AddressLine1;
	}

	string AddressLine1()
	{
		return _Address._AddressLine1;
	}

	void SetAddressLine2(string AddressLine2)
	{
		_Address._AddressLine2 = AddressLine2;
	}

	string AddressLine2()
	{
		return _Address._AddressLine2;
	}

	void SetCity(string City)
	{
		_Address._City = City;
	}

	string City()
	{
		return _Address._City;
	}

	void SetCountry(string Country)
	{
		_Address._Country = Country;
	}

	string Country()
	{
		return _Address._Country;
	}

	void PrintAddress()
	{
		cout << "\nAddress:\n";
		cout << "AddressLine1 : " << _Address._AddressLine1 << endl;
		cout << "AddressLine2 : " << _Address._AddressLine2 << endl;
		cout << "City         : " << _Address._City << endl;
		cout << "Country      : " << _Address._Country << endl;
	}

};

int main()
{
	clsPerson Person1("Mo Ali Alamoudi", "My Bulding", "Sharj Street", "Mukalla", "Yemen");
	Person1.PrintAddress();

	

	system("pause>0");
	return 0;
}