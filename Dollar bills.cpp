#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    double TotalAmount;
    int DollarsConversion;
    int Change;     
    int Dollars;     
    int Hundreds = 0;
    int Fifties = 0;
    int Twenties = 0;
    int Tens = 0;
    int Fives = 0;
    int Ones = 0;
    int CentsConversion;    
    int Cents;
    int Quarters = 0;
    int Dimes = 0;
    int Nickels = 0;
    int Pennies = 0;

    cout << "Please enter the amount to convert: $";
    cin >> TotalAmount;

    //Dollars Calculation.
    DollarsConversion = TotalAmount * 100;
    Hundreds = DollarsConversion / 10000;
    Change = DollarsConversion % 10000;
    Fifties = Change / 5000;
    Change %= 5000;
    Twenties = Change / 2000;
    Change %= 2000;
    Tens = Change / 1000;
    Change %= 1000;
    Fives = Change / 500;
    Change %= 500;
    Ones = Change / 100;
    Change %= 100;

    //Resets the Stack to calculate for the cents.
    Dollars = TotalAmount;   
    CentsConversion = TotalAmount * 1000;   
    Dollars *= 1000;    
    Cents = CentsConversion - Dollars;

    //Cents Calculation.
    Quarters = Cents / 250;
    Change = Cents % 250;
    Dimes = Change / 100;
    Change %= 100;
    Nickels = Change / 50;
    Change %= 50;
    Pennies = Change / 10;
    Change %= 10;

    cout << "\nNumber of Hundred Dollar Bills: " << Hundreds << endl;
    cout << "Number of Fifty Dollar Bills: " << Fifties << endl;
    cout << "Number of Twenty Dollar Bills: " << Twenties << endl;
    cout << "Number of Ten Dollar Bills: " << Tens << endl;
    cout << "Number of Five Dollar Bills: " << Fives << endl;
    cout << "Number of One Dollar Bills: " << Ones << endl;

    cout << "\nNumber of Quarters: " << Quarters << endl;
    cout << "Number of Dimes: " << Dimes << endl;
    cout << "Number of Nickels: " << Nickels << endl;
    cout << "Number of Pennies: " << Pennies << endl;

    return 0;
}
