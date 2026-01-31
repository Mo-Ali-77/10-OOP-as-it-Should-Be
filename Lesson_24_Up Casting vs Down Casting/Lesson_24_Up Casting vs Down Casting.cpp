#include<iostream>
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

class clsB : public clsA
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


int main()
{
	clsB B;

	// Up Casting, NOTE: Nothing new, as if you used Object from class A.
	clsA* A = &B;

	A->Fun3A();

	// The benefit of upcasting when used with virtual functions and override.
	// In the Next Lesson Number 25.
	

	system("pause>0");
	return 0;
}