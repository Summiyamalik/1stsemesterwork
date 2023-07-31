#include<iostream>
using namespace std;
int main(void){
	int a, b;
	int add, sub, mul;
	float div;
	
	cout<< "enter first number\n";
	cin>> a;
	cout<< "enter second number\n";
	cin>> b;
	
	add = a+b;
	sub = a-b;
	mul = a*b;
	div = a/b;
	
	cout<< "\nadd = " << add;
	cout<< "\nsub = " << sub;
	cout<< "\nmul = " << mul;
	cout<< "\ndiv = " << div;
	return 0;	
	
}