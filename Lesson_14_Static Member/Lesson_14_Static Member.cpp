#include <iostream>
using namespace std;



class clsA
{
public:
	int var = 0;
	static int conter;

	clsA()
	{
		conter++;
	}

	void Print()
	{
		cout << "\nVar    = " << var;
		cout << "\nConter = " << conter << endl;
	}

};

//static variable initialisation outside the class
int clsA::conter = 0;

int main()
{
	clsA A1, A2, A3;

	A1.var = 10;
	A1.Print();

	A2.var = 20;
	A2.Print();

	A3.var = 30;
	A3.Print();


	A1.conter = 500;

	cout << "\nafter chaning the static member counter in one object:\n";

	A1.Print();
	A2.Print();
	A3.Print();


	system("pause>0");

	return 0;
}
