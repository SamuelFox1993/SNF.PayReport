// Pay Report
// Sam Fox

#include <iostream>
#include <conio.h>

using namespace std;

struct Employee
{
	int ID;
	string FirstName;
	string LastName;
	float HoursWorked;
	float HourlyRate;
};

float PayReport(Employee* pEmployee, int numEmployees)
{
	float weeklyPay = pEmployee->HoursWorked * pEmployee->HourlyRate;

	for (int i = 0; i < numEmployees; i++)
	{
		cout << pEmployee->ID << ". " << pEmployee->FirstName << " " << pEmployee->LastName << ": $" << weeklyPay << "\n";
	}

	return weeklyPay;
}

Employee* GetEmployeeInfo()
{
	Employee* pE = new Employee;
	cout << "Enter the employee's ID number: ";
	cin >> pE->ID;
	cout << "Enter the employee's first name: ";
	cin >> pE->FirstName;
	cout << "Enter the employee's last name: ";
	cin >> pE->LastName;
	cout << "Enter the employee's hours worked: ";
	cin >> pE->HoursWorked;
	cout << "Enter the employee's hourly rate: ";
	cin >> pE->HourlyRate;
	cout << "\n";

	return pE;
}

int main()
{
	int numEmployees = 0;

	cout << "Enter the number of employees: ";
	cin >> numEmployees;
	cout << "\n";

	Employee* employees = new Employee[numEmployees];

	for (int i = 0; i < numEmployees; i++)
	{
		employees[i] = *GetEmployeeInfo();
	}

	cout << "Pay Report\n";
	cout << "----------\n";

	
	PayReport(employees, numEmployees);
	

	(void)_getch();
	return 0;
}