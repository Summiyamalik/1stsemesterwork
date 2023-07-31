#include<iostream>
using namespace std;


int sum(int a, int b, int c){
	//int c;
	//c=a+b;
	if(a>b && a>c)
	cout<<a<<" is max:"<<endl;
	if(b>a && b>c)
	cout<<b<<" is max:"<<endl;
	if(c>a && c>b)
	cout<<c<<" is max:"<<endl;
	//return 0;
}
int main(){
	int num1,num2,num3;
	cout<<"enter the number";
	cin>>num1;
    cout<<"enter the number";
	cin>>num2;	
	cout<<"enter the number";
	cin>>num3;
	sum(num1,num2,num3);
}
