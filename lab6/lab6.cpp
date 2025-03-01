#include <iostream>
using namespace std;

// function prototype
double Compute(int, double, double);

int main()
{
    // declare local variables
    char name[30], month[20];
    int num = 0; 
    double salary = 0, sales = 0, commission = 0;

    cout << "welcome to the commission application\n";

    // input employee details
    cout << "enter the employee name \n";
    cin.getline(name, 30);
    cout << "enter the employee id number \n";
    cin >> num;
    cout << "enter the employee salary \n";
    cin >> salary;
    cout << "enter the employee sales \n";
    cin >> sales;

    // employee sales month
    cout << "enter sales activity month \n";
    cin >> month;

    // function call
    commission = Compute(num, salary, sales);

    // output commission report
    cout << "\ncommission report for \n";
    cout << name << "\n";
    cout << "id number        \t" << num << endl;
    cout << "monthly salary    \t" << "$" << salary << endl;
    cout << "monthly sales      \t" << "$" << sales << endl;

    // sales month display
    cout << "sales activity month \t" << month << endl;

    cout << "commission            \t" << "$" << commission << endl;
    cout << "gross salary is        \t" << "$" << (salary + commission) << endl;

    return 0;
}

// function definition
double Compute(int number, double salary, double gross_sales)
{
    cout << "commission report for employee " << number << endl;
    if (gross_sales > 15000)
        return gross_sales * 0.05;
    else 
        return 200;
}