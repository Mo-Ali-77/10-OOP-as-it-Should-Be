#include <iostream>
using namespace std;

class clsA
{
public:
	
	static int Fun1()
	{
		return 20;
	}

	int Fun2()
	{
		return 30;
	}

};


int main()
{
	

	// The following line calls static function directly via class
	// not through the object
	// At class level you can call only static methods and static
	// members
	cout << clsA::Fun1() << endl;

	clsA A1, A2;
	//static methods can also be called throught the object.
	cout << A1.Fun2() << endl;
	cout << A2.Fun1() << endl;

	system("pause>0");

	return 0;
}
