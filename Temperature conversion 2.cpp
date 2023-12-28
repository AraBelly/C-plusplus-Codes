#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int choice1, choice2, number;

	
	cout << "Enter number to convert: ";
	cin >> number;
	
	do{
	cout << "\nSelect What Operation Type.\n"
		"(1) for Fahrenheit\n"
		"(2) for Celcius\n"
		"(3) for Kelvin\n";
	cout << "\nEnter your choice: ";
	cin >> choice1;
	switch (choice1)
	{
		case 1:
			cout << "\nSelect What Convertion.\n"
				"(1) to Fahrenheit\n"
				"(2) to Celcius\n"
				"(3) to Kelvin\n";
			cout << "\nEnter your choice: ";
			cin >> choice2;
			switch (choice2)
			{
				case 1:
					int f;
					f = number;
					cout << number << "\370F" << " is equal to " << f << "\370F";
					break;
				
				case 2:
					double c;
					c = (number - 32) * 5.0/9;
					cout << number << "\370F" << " is equal to " << c << "\370C";
					break;
					
				case 3:
					double k;
					k = (5.0/9) * (number - 32)+ 273.15;
					cout << number << "\370F" << " is equal to " << k << "K";
					break;
			}
			break;
			
		case 2:
			cout << "\nSelect What Convertion.\n"
				"(1) to Fahrenheit\n"
				"(2) to Celcius\n"
				"(3) to Kelvin\n";
			cout << "\nEnter your choice: ";
			cin >> choice2;
			switch (choice2)
			{
				case 1:
					double f;
					f = (number * 9.0/5) + 32;
					cout << number << "\370C" << " is equal to " << f << "\370F";
					break;
				
				case 2:
					int c;
					c = number;
					cout << number << "\370C" << " is equal to " << c << "\370C";
					break;
					
				case 3:
					double k;
					k = number + 273.15;
					cout << number << "\370C" << " is equal to " << k << "K";
					break;
			}
			break;
		case 3:
			cout << "\nSelect What Convertion.\n"
				"(1) to Fahrenheit\n"
				"(2) to Celcius\n"
				"(3) to Kelvin\n";
			cout << "\nEnter your choice: ";
			cin >> choice2;
			switch (choice2)
			{
				case 1:
					double f;
					f = (number - 273.15) * 9.0/5 + 32;
					cout << number << "K" << " is equal to " << f << "\370F";
					break;
				
				case 2:
					double c;
					c = number - 273.15;
					cout << number << "K" << " is equal to " << c << "\370C";
					break;
					
				case 3:
					int k;
					k = number;
					cout << number << "K" << " is equal to " << k << "K";
					break;
			break;
	}
}
}
	while (choice1 >= 4);
}
