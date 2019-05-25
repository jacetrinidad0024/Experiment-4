#include<iostream>
#include <conio.h>

using namespace std;
 
int main()
{
	int arr[100], s, i, j, temp;
	char A, B, c, b, choice;

	cout << "Experiment 4 (Problem 2)\n\n";
	cout << "\nSelection Sorting... \n" << endl;
	cout << "Enter the array size: ";
	cin >> s;
	cout << "\nEnter the " << s << " elements: "; 
	cout << endl;
	
	for (i = 0; i < s; i++)
	cin >> arr[i];

	cout << "\nWhat type of sort do you want" << endl;
	cout << " A for Bubble Sort" << "   " << " B for Selection Sort" << endl;
	cin >> choice;

	switch (choice)
	{
		case 'A':
		case 'a':
	
			cout << "\nAfter using either selection or bubble sort... " << endl;
			for (i = 1; i < s; i++)
			{
				for (j = 0; j < (s - i) ; j++)
					if (arr[j] > arr[j +1 ])
					{
						temp = arr[j];
						arr[j] = arr[j + 1];
						arr[j + 1] = temp;
					}
			}
			break;
		
		case 'B':
		case 'b':

			cout << "\nAfter using either selection or bubble sort..." << endl;
			for(i = 0; i < s; i++)
			{
				for(j = i + 1; j < s; j++)
				{
					if(arr[i] > arr[j])
					{
						temp = arr[i];
						arr[i] = arr[j];
						arr[j] = temp;
					}
				}
			}
			break;
	}
	
	cout<< "Sorted Data: ";
	for (i = 0; i < s; i++)
	cout << arr[i] << " ";
		
	return 0;
}
