#include <iostream>

using namespace std;

class clsAddress
{
	string _AddressLine1 = "";
	string _AddressLine2 = "";
	string _PoBox = "";
	string _ZipCode = "";

public:

	clsAddress(string AddressLine1, string AddressLine2, string PoBox, string ZipCode)
	{
		_AddressLine1 = AddressLine1;
		_AddressLine2 = AddressLine2;
		_PoBox = PoBox;
		_ZipCode = ZipCode;

	}


	void SetAddressLine1(string AddressLine1)
	{
		_AddressLine1 = AddressLine1;
	}

	void SetAddressLine2(string AddressLine2)
	{
		_AddressLine2 = AddressLine2;
	}

	void SetPoBox(string PoBox)
	{
		_PoBox = PoBox;
	}

	void SetZipCode(string ZipCode)
	{
		_ZipCode = ZipCode;
	}

	string AddressLine1()
	{
		return _AddressLine1;
	}

	string AddressLine2()
	{
		return _AddressLine2;
	}

	string PoBox()
	{
		return _PoBox;
	}

	string ZipCode()
	{
		return _ZipCode;
	}

	void Print()
	{
		cout << "\nAddress Detalis:\n";
		cout << "-------------------\n";
		cout << "Address Line 1: " << _AddressLine1 << "\n";
		cout << "Address Line 2: " << _AddressLine2 << "\n";
		cout << "PoBox: " << _PoBox << "\n";
		cout << "ZipCode : " << _ZipCode << "\n";
	}

};


int main()
{
	// It is forbidden to create an object without value.
	/*clsAddress Address1;
	Address1.Print();*/

	clsAddress Address2("Yemen Hadhramout", "Mukalla", "2P 200", "1023558");
	Address2.Print();
}