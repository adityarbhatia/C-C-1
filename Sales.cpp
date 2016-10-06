#include <iostream>
#include <cstdlib>
using namespace std;

double discountToBeDetermined(int packages)
{
    double discount;
	//This series of if/else if statements determine the amount of discount to be given
	if(packages<10)
	{
		discount = 0; 
	}
	else if(packages>=10 && packages =< 19)
	{
		discount = 0.25;
	}
	else if(packages >= 20 && packages < 50)
	{
		discount = 0.30;
	}
	else if(packages>=50 && packages<100)
	{
		discount = 0.40;
	}
	else
	{
		discount = 0.50;
	}

	return discount;
}
int main()
{
	//Declaring The Variables
	int packages;
	double discount;

	cout << "Enter the number of packages: ";
	cin >> packages;

	double finalDiscount = discountToBeDetermined(packages);

	packages *= finalDiscount;

	//Prints out the Data.
	cout << "Discount: " << finalDiscount << " Total Purchase: " << packages << endl;

	return 0;
}
