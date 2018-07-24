#include <iostream>
#include <string>

using namespace std;


int main() {

	float paycheck;


	cout << "Welcome to Chris' paycheck calculator. Enter your expenses and then watch your paycheck slowly dwindle away to nothing." << endl;


	float pay();
	paycheck = pay();
	float rent();
	float insurance();
	float carPayment();
	float gasMoney();
	float groceries();
	float savings();
	
	paycheck -= rent();
	paycheck -= insurance();
	paycheck -= carPayment();
	paycheck -= gasMoney();
	paycheck -= groceries();
	paycheck -= savings();

	cout << "\n\n\nYou have $" << paycheck << " remaining.";


	return 0;
}	



float savings()
{
	char savingsBool;
	float savings;

	cout << "\n\nWould you like to deduct a portion to devote to savings? (Type y or n): ";
	cin >> savingsBool;

	switch (savingsBool)
	{
	case 'y':

		cout << "\nHow much will you deduct for savings? ";
		cin >> savings;
		break;

	case 'n':
		
		savings = 0;
		cout << "\nNot a smart move...";
		break;
	}
	return savings;
}




float groceries()
{
	char groceriesBool;
	float groceries;

	cout << "\n\nDo grocery expenses need to be deducted from this paycheck? (Type y or n): ";
	cin >> groceriesBool;

	switch (groceriesBool)
	{
	case 'y':

		cout << "\nHow much will you deduct for groceries? ";
		cin >> groceries;
		break;

	case 'n':

		groceries = 0;
		cout << "\nLucky you.";
		break;
	}
	return groceries;
}






float gasMoney()
{
	char gasMoneyBool;
	float gasMoney;

	cout << "\n\nDoes gas money need to be deducted from this paycheck? (Type y or n): ";
	cin >> gasMoneyBool;

	switch (gasMoneyBool)
	{
	case 'y':

		cout << "\nHow much will you deduct for gas? ";
		cin >> gasMoney;
		break;

	case 'n':

		gasMoney = 0;
		cout << "\nLucky you.";
		break;
	}
	return gasMoney;
}




float carPayment()
{
	char carPaymentbool;
	float carPayment;

	cout << "\n\nDoes a car payment need to be deducted from this paycheck? (Type y or n): ";
	cin >> carPaymentbool;

	switch (carPaymentbool)
	{
	case 'y':

		cout << "\nHow much is your car payment? ";
		cin >> carPayment;
		break;

	case 'n':

		carPayment = 0;
		cout << "\nLucky you.";
		break;
	}
	return carPayment;
}






float insurance()
{
	char insurancebool;
	float insurancePayment;

	cout << "\n\nDoes car insurance need to be deducted from this paycheck? (Type y or n): ";
	cin>>insurancebool;

	switch (insurancebool)
	{
	case 'y':

		cout << "\nHow much is your insurance payment? ";
		cin >> insurancePayment;
		break;

	case 'n':

		insurancePayment = 0;
		cout << "\nLucky you.";
		break;
	}
	return insurancePayment;
}





float rent()
{
	char rentBool;
	float rent;

	cout << "\nDoes rent need to be deducted from this paycheck? (Type y or n): ";
	cin >> rentBool;

	switch (rentBool)
	{
	case 'y':

		cout << "\nHow much is rent? ";
		cin >> rent;
		break;

	case 'n':

		rent = 0;
		cout << "\nLucky you.";
		break;
	}
	return rent;
}





//Asks user for paycheck amount input and stores it in paycheck variable in main function
float pay() 
{
	float p;

	cout << "\n\n\n\nEnter amount received on paycheck: ";
	cin >> p;

	return p;
}


