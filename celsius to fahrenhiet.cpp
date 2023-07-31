#include<iostream>
#include<iomanip>
using namespace std;
int main(void){
	float c=0.00,f=0.00;
	cout <<"\n\n";
	cout <<"\tcelsius to fahrenhiet converter in c++";
	cout <<"\n";
	cout <<"give temperature in celsius: ";
	cin >> c;
	f = (1.8*c)+32;
	
	cout <<"\n\n";
	cout << setprecision(2) << fixed
		     <<"\tthe temperature in fahrenheit is  "
	     << f <<".";
	cout <<"\n";
	cout <<"\tend of the program";
	
	return 0;     
	
};