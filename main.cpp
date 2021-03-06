#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
using namespace std;

int main()
{
	int x = 0;
	cout << "We are creating an employee" << endl;
	CommissionEmployee employee(
		"Sue", "Jones", "222-22-2222", 100000, .06);

	cout << fixed << setprecision( 2 );

	cout << "Employee information obtained by get functions: \n"
		 << "\nFirst name is " << employee.getFirstName()
		 << "\nLast name is " << employee.getLastName()
		 << "\nSocial Security Number is: " << employee.getSocialSecurityNumber()
		 << "\nGross sales are: " << employee.getGrossSales()
		 << "\nCommission rate is " << employee.getCommissionRate() << endl;

	employee.setGrossSales( 8000 );
	employee.setCommissionRate( .1 );

	cout << "\nUpdated employee infromation output by print function: \n"
		 << endl;
	employee.print();

	cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;

	cout << "\n\nPress any key to exit." << endl;

	cin >> x;

	return 0;
}

