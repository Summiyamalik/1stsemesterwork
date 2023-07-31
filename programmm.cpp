#include<iostream>
using namespace std;
int main(void){
	
	double itemone = 12.95, itemtwo = 24.95, itemthree = 6.95, itemfour = 14.95, itemfive = 3.95;
	double subtotal = itemone + itemtwo + itemthree + itemfour + itemfive;
	double tax = 0.06 * subtotal;
	double total = tax*subtotal;
	
	cout <<"price of one 1 = $" << itemone << endl;
	cout <<"price of two 2 = $" << itemtwo << endl;
	cout <<"price of three 3 = $" << itemthree << endl;
	cout <<"price of four 4 = $" << itemfour << endl;
	cout <<"price of five 5 = $" << itemfive << endl;
	cout <<"subtotal = $" <<subtotal << endl;
	cout <<"tax = $" <<tax << endl;
	cout <<"total = $" <<total <<endl << endl;
	return 0;
	
}