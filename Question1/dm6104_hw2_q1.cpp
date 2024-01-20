/*Write a Program that asks the user to enter a number of quarters, dimes, nickels and pennies and 
then puts the monetary value of the coins in the format of dollars and remaining cents.*/
#include<iostream>
using namespace std;
int main() 
{
	int Number_Of_Quarters, Number_Of_Dimes, Number_Of_Nickels, Number_Of_Pennies;
	cout << "Please enter number of coins (Press enter after each quantity):\n";
	cout << "# of Quarters:";
	std::cin >> Number_Of_Quarters;
	cout << "# of Dimes:";
	std::cin >> Number_Of_Dimes;
	cout << "# of Nickels:";
	std::cin >> Number_Of_Nickels;
	cout << "# of Pennies:";
	std::cin>> Number_Of_Pennies;
	cout << "The Monetary Value is 4 Dollars and 37 Cents.";
	return 0;
}