#include<iostream>
using namespace std;
int main(void){
	float Fahrenhiet,Centigrade;
	cout <<"Enter temperature in fahrenheit: ";
	cin >>Fahrenhiet;
	Centigrade = (Fahrenhiet-32)/1.8;
	cout <<"Temperature in centigrade " <<Centigrade;
	return 0;
	
	
}