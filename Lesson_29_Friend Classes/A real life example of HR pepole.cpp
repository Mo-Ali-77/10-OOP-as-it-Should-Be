#include <iostream>
using namespace std;

class clsEmployee {
private:
	string _physicalDisabilities;
	string _psychologicalProblems;
	string _weaknesses;
public:
	string name;
	string major;
	int yearsOfExperience;
	int age;
	bool isMarried;

	clsEmployee() {
		_physicalDisabilities = "None";
		_psychologicalProblems = "Imposter Syndrome";
		_weaknesses = "Fear of the future";
		name = "Mohammed Ali";
		major = "CS";
		yearsOfExperience = 1;
		age = 99;
		isMarried = false;
	}

	friend class clsHumanResources;
};

class clsHumanResources {
public:
	// Here were the HR will show you that they doesn't show your information to anyone.
	void DisplayInfoToTheEmployee(clsEmployee emp) {
		cout << emp.name << endl;
		cout << emp.major << endl;
		cout << emp.yearsOfExperience << endl;
		cout << emp.age << endl;
		cout << emp.isMarried << endl;

	}
	// and Here they show the management your Information. Don't Ever Trust the HR Team
	void DisplayInfoToManagers(clsEmployee emp) {
		cout << emp._physicalDisabilities << endl; // Your Private Info
		cout << emp._psychologicalProblems << endl;// Your Private Info
		cout << emp._weaknesses << endl;// Your Private Info
		cout << emp.name << endl;
		cout << emp.major << endl;
		cout << emp.yearsOfExperience << endl;
		cout << emp.age << endl;
		cout << emp.isMarried << endl;
	}
};

int main()
{
	clsEmployee Mohammed;
	clsHumanResources Abu_Jamal;
	Abu_Jamal.DisplayInfoToTheEmployee(Mohammed);
	Abu_Jamal.DisplayInfoToManagers(Mohammed);
	
	system("pause>0");
	return 0;

}