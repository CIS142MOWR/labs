#include <iostream>
using namespace std;
int main() {
	////Group 3 Ephrem, Ruben, Christian, Johannely, Programmer
 // // Program that computes the area of a triangle
	//// declare and initialize the variables	 
	//double area = 0, base = 0, height = 0;
	//// [Input] request and receive variable values
	//cout << "\nplease enter the base   ";
	//cin >> base;
	//cout << "\nplease enter the height ";
	//cin >> height;
	//// [Process] perform any required variable assignment
	//area = 0.50 * base * height;
	//// [Output] display values to the program user
	//cout << "\nA triangle with base " << base;
	//cout << " and height " << height;
	//cout << "\n";
	//cout << "\nhas an area of " << area;
	//cout << " square units." << endl << endl;
	//cout << "press [Enter] to close this window\n";
	//system("pause"); // Windows command
	//return 0;

	


	//Group 3 Ephrem, Ruben, Christian, Johannely
	// Program that computes the area of trapezoid
	// declare and initialize the variables
	double area = 0, base1 = 0, base2 = 0, height = 0;
	//[Input] request and receive varaiable values
	cout << "\nplease enter the base 1   ";
	cin >> base1;
	cout << "\nplease enter the base 2   ";
	cin >> base2;
	cout << "\nplease enter the height   ";
	cin >> height;
	//[Process] perform any reuired variable assignment
	area = 0.50 * height * (base1 + base2);
	// [Output] display values to the program user
	cout << "\nA trapezoid with a short base " << base1 << ", a long base " << base2 <<" and";
	cout << "\na height " << height << " has an area of " << area;
	cout << " square units." << endl << endl;
	cout << "press [Enter] to close this window\n";
	system("pause"); // Windows command
	return 0;

	



}
