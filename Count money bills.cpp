#include <iostream>
using namespace std;

int main()
{
	int sale, paid, sub, Bills, Coins;
	int BillConversion;
	int CoinConversion;
	int Change;
	int Thousands = 0;
    int Five_Hundreds = 0;
    int Hundreds = 0;
    int Fifties = 0;
    int Twenties = 0;
    int Tens = 0;
    int Fives = 0;
    int Ones = 0;

	cout << "Enter Sale Amount: ";
	cin >> sale;
	cout << "Enter Amount Paid: ";
	cin >> paid;
	
	sub = paid - sale;
	cout << "Change is: " << sub << endl;
	
	BillConversion = sub * 100;
    Thousands = BillConversion / 100000;
    Change = BillConversion % 100000;
    Five_Hundreds = Change / 50000;
    Change %= 50000;
    Hundreds = Change / 10000;
    Change %= 10000;
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
	
	Bills = sub;
	CoinConversion = sub * 1000;   
    Bills *= 1000;    
    Coins = CoinConversion - Bills;
		
	cout << "\n1000 bill/s: " << Thousands << endl;
	cout << "500 bill/s: " << Five_Hundreds << endl;
	cout << "100 bill/s: " << Hundreds << endl;
	cout << "50 bill/s: " << Fifties << endl;
	cout << "20 bill/s: " << Twenties << endl;
	cout << "10 coin/s: " << Tens << endl;
	cout << "5 coin/s: " << Fives << endl;
	cout << "1 coin/s: " << Ones << endl;
	return 0;
}
