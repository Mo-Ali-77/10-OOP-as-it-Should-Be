#include <iostream>
using namespace std;

class clsPerson
{
private:
	int _Salary = 9000;

protected:
	int Age_ = 23;


public:
	string FirstName;
	string LastName;

	string FullName()
	{
		return FirstName + " " + LastName;
	}

	int Salary()
	{
		return _Salary;
	}

	int Age()
	{
		return Age_;
	}
};


int main()
{
	clsPerson Person1, Person2;
	Person1.FirstName = "Mohammed";
	Person1.LastName = "Al-amoudi";

	Person2.FirstName = "Mohammed";
	Person2.LastName = "Abu-Hadhoud";

	
	cout << Person1.FullName() << endl;
	cout << Person1.Age() << endl;
	cout << Person1.Salary() << endl;
	cout << Person2.FullName() << endl;
	


	system("pause>0");
	return 0;
}