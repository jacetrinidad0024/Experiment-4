#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int a, b, c;
	double result;
	char choice; 
	bool abort=false;
	
	cout << "Experiment 4 (problem 1)\n\n";
	cout << "MENU:" << endl;
	cout << "1. Add" << endl;
	cout << "2. Subtract" << endl;
	cout << "3. Multiply" << endl;
	cout << "4. Divide" << endl;
	cout << "5. Modulus" << endl;
	cout << endl;
	
	do
	{
	cout << "Enter your choice: ";
	cin >> c;
	cout << "Enter your two numbers: ";
	cin >> a >> b;
	
	switch(c)
	{
		case 1:
		result = a + b;
		break;
		
		case 2:
		result = a - b;
		break;
		
		case 3:
		result = a * b;
		break;
		
		case 4:
		result = a / b;
		break;
		
		case 5:
		result = a % b;
		break;
		
		default:
		cout << "Invalid!" << endl;
	}
	
	cout << "Result: " << result << endl;
	cout << endl;
	cout << "Continue? y/n" << endl;
	cin >> choice;
	cout << endl;
	
	switch (choice)
	{
		case 'Y':
		case 'y':
		break;
		
		default:
		abort = true;
	}
	
}while (!abort);

	_getch ();
	return 0;
}
