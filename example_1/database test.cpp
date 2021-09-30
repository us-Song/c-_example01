#include <iostream>
#include "Database.h"

using namespace std;
using namespace Records;

int main()
{
	Database myDB;
	Employee& emp1 = myDB.addEmployee("Greg", "Wallis");
	emp1.fire();

	Employee& emp2 = myDB.addEmployee("Marc", "white");
	emp2.setSalary(10000);
	
	Employee& emp3 = myDB.addEmployee("John", "For");
	emp3.setSalary(10000);
	emp3.promote();

	cout << "all employees:" << endl << endl;

	cout <<endl<< "current employees:" << endl << endl;

	cout <<endl<< "former employees:" << endl << endl;
	myDB.displayFormer();
}
