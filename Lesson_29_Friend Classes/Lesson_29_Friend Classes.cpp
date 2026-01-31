#include<iostream>
using namespace std;


class clsA
{
	int _Var1;

protected:
	int _Var2;

public:

	int _Var3;

	clsA()
	{
		_Var1 = 10;
		_Var2 = 20;
		_Var3 = 30;
	}

	friend class clsB;
};

class clsB
{

public:
	void Desplay(clsA A)
	{
		// Just you can access to Variable of class A from class B
		cout << "_Var1  = " << A._Var1 << endl;
		cout << "_Var2  = " << A._Var2 << endl;
		cout << "_Var3  = " << A._Var3 << endl;
	}
};


//int main()
//{
//	clsA A1;
//	clsB B1;
//	B1.Desplay(A1);
//
//	system("pause>0");
//	return 0;
//}