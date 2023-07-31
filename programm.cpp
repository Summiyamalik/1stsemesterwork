#include<iostream>
using namespace std;
int main(void){
	float radius1, area1,radius2,area2,area3,l,b,v,pi=3.142;
	int base, hight;
	
	cout << "enter the radius1 of the circle ="<<endl;
	cin>>radius1;
	area1 = 3.142*radius1*radius1;
	cout<< "\narea1 of the circle is = "<<area1<<endl;
	
	
	cout<< "\nenter the radius2 =";
	cin>>radius2;
	v=(1.333*3.142*radius2*radius2*radius2);
	cout<<"\nthe volume of sphere ="<<v;
	
	
	cout<< "\nenter base of triangle =";
	cin>>base;
	cout<< "\nenter hight of triangle =";
	cin>>hight;
	area2=base*hight*5;
	cout<< "\narea of triangle for given base and hight is ="<<area2;
	
	
	
	cout<< "\nenter the value of length =";
	cin>>l;
	cout<< "\nenter the value of bredth =";
	cin>>b;
	area3 = l*b;
	cout<< "\nthe area of reactangle ="<<area3;
	return 0;
	
}