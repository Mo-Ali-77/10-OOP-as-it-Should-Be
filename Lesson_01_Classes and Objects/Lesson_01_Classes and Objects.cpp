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
	clsPerson Person1;
	Person1.FirstName = "Mohammed";
	Person1.LastName = "Al-amoudi";

	cout << Person1.FullName();


	system("pause>0");
	return 0;
}