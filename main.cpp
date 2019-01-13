#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h"
using namespace std;

int main()
{
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

	cout << "\n Updated employee infromation output by print function: \n"
		 << endl;
	employee.print();

	cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}
// This is a comment
