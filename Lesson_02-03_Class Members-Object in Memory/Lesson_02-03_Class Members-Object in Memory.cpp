#include <iostream>
using namespace std;

class clsPerson
{
public:
	string FirstName;
	string LastName;

	string FullName()
	{
		return FirstName + " " + LastName;
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
	cout << Person2.FullName();


	system("pause>0");
	return 0;
}