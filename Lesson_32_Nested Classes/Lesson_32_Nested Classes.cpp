#include<iostream>
using namespace std;
class clsPerson {

	class clsAddress
	{
		string _AddressLine1;
		string _AddressLine2;
		string _City;
		string _Country;

	public:
		
		clsAddress(string AddressLine1, string AddressLine2, string City, string Country)
		{
			_AddressLine1 = AddressLine1;
			_AddressLine2 = AddressLine2;
			_City = City;
			_Country = Country;
		}

		void SetAddressLine1(string AddressLine1)
		{
			_AddressLine1 = AddressLine1;
		}

		string AddressLine1()
		{
			return _AddressLine1;
		}

		void SetAddressLine2(string AddressLine2)
		{
			_AddressLine2 = AddressLine2;
		}

		string AddressLine2()
		{
			return _AddressLine2;
		}

		void SetCity(string City)
		{
			_City = City;
		}

		string City()
		{
			return _City;
		}

		void SetCountry(string Country)
		{
			_Country = Country;
		}

		string Country()
		{
			return _Country;
		}

		void Print()
		{
			cout << "\nAddress:\n";
			cout << _AddressLine1 << endl;
			cout << _AddressLine2 << endl;
			cout << _City << endl;
			cout << _Country << endl;
		}

		// We can use Friend class but not more secure
		//friend class clsPerson; 
	};

	string _FullName;
	
public:

	clsAddress Address = clsAddress("", "", "", "");

	clsPerson(string FullName, string AddressLine1, string AddressLine2, string City, string Country)
	{
		_FullName = FullName;
		 Address = clsAddress(AddressLine1, AddressLine2, City, Country);
		
	}
};

int main()
{
	clsPerson Person1("Mo", "Sharj", "Mukalla Street", "Mukalla", "Yemen");
	Person1.Address.Print();
	

	system("pause>0");
	return 0;
}