#include <iostream>
#include "clsEmployee.h"
using namespace std;

int main()
{
	clsEmployee Employee1(10, "Mohammed", "Ali", "Info@MoAli.com", "730408246", "CEO", "CyberSecurity", 900000);

	Employee1.Print();


	system("pause>0");
	return 0;
}