
#include <iostream>
using namespace std;

int main()
{

	// (1)  declare and initialize the variables
	int employee_number = 0;
	double number_of_hours = 0, hourly_wage = 0, gross_pay = 0, total_tax = 0, net_pay = 0;
	bool overtime = false, wage_earner = false;


	// (2)  prompt user and read the employee number
	cout << "Enter your employee number." << endl;
	cin >> employee_number;

	// (3)  prompt user and read the number of hours worked
	cout << "Enter the number of hours worked." << endl;
	cin >> number_of_hours;

	// (4)  prompt user and read the employee hourly wage
	cout << "Enter your hourly wage." << endl;
	cin >> hourly_wage; 
	
	if(hourly_wage == 0) {
		cout << "\nSalaried employee." << endl;
	}else {
		cout << "\nWage earner employee. " << endl;
	}
	// (5)  use a selection control structure to determine the gross pay
	if (number_of_hours <= 40) {
		gross_pay = number_of_hours * hourly_wage;
	}else{
		// (6)  determine whether overtime pay is included 
		gross_pay = (40 * hourly_wage)+ ((number_of_hours - 40) * 1.5 * hourly_wage);
		overtime = true;
	}

	// (7)  determine the federal and state taxes (15% + 3% = 18%)
	total_tax = gross_pay * 0.18;

	// (8)  determine the net pay
	net_pay = gross_pay - total_tax;

	// (9)  display the employee number 
	cout << "Employee number: " << employee_number << endl;

	// (10)  display the employee number of hours worked 
	cout << "Number of hours worked: " << number_of_hours << endl;

	// (11)  display the hourly wage 
	cout << "Hourly wage: $"<< hourly_wage << endl;

	// (12)  display the gross pay 
	cout << "Gross pay: $" << gross_pay<< endl;

	// (13)  display the total tax deductions 
	cout << "Total tax deductions: $" << total_tax << endl;

	// (14)  display the net pay 
	cout << "Net pay: $" << net_pay << endl;

	// (15)  display whether overtime pay is included 
	if (overtime) {
		cout << "Overtime pay included." << endl;
	}
	else {
		cout << "Overtime pay not included." << endl;
	}
	return 0;
}

