#include <iostream>
using namespace std;

class clsA
{
	short Var1A;

	void Fun1A()
	{
		cout << "\nPrivate Fun1A\n";
	}

protected:

	short Var2A;

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

class clsB : protected clsA
{
	short Var1B;

	void Fun1B()
	{
		cout << "\nPrivate Fun1B\n";
	}

protected:

	short Var2B;

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

class clsC : private clsB
{
	short Var1C;

	void Fun1C()
	{
		cout << "\nPrivate Fun1C\n";
	}

protected:

	short Var2C;

	void Fun2C()
	{
		cout << "\nProtected Fun2C\n";
	}

public:

	void Fun3C()
	{
		cout << "\nPublic Fun3C\n";

		clsB::Fun2B();
	}
};

class clsD : public clsC
{
	short Var1D;

	void Fun1D()
	{
		cout << "\nPrivate Fun1D\n";
	}

protected:

	short Var2D;

	void Fun2D()
	{
		cout << "\nProtected Fun2D\n";
	}

public:

	void Fun3D()
	{
		cout << "\nPublic Fun3D\n";

		clsC::Fun2C();
	}
};


int main()
{
	clsB B;

	B.Fun3B();

	clsC C1;
	C1.Fun3C();

	clsD D1;

	D1.Fun3D();

	system("pause>0");
	return 0;
}