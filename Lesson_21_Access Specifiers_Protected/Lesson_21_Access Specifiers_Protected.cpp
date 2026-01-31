#include <iostream>
using namespace std;

class clsA 
{
	short Var;

	void Fun1A()
	{
		cout << "\nPrivate Fun1A\n";
	}

protected:

	short Var2;

	void Fun2A()
	{
		cout << "\nProtected Fun2A\n";
	}

public:

	void Fun3A()
	{
		cout << "\nPublic Fun3A\n";
	}
};

class clsB : public clsA
{
	short Var;

	void Fun1B()
	{
		cout << "\nPrivate Fun1B\n";
	}

protected:

	short Var2;

	void Fun2B()
	{
		cout << "\nProtected Fun2B\n";
	}

public:

	void Fun3B()
	{
		cout << "\nPublic Fun3B\n";

		// call Protected Fun2
		clsA::Fun2A();
	}
};

int main()
{
	clsB B;

	B.Fun3B();

	system("pause>0");
	return 0;
}