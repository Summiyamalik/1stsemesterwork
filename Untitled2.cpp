#include<iostream>
using namespace std;


int sum(int a, int b){
	//int c;
	//c=a+b;
	cout<<a+b;
	return (a+b);
}
int main(){
	int num1,num2;
	cout<<"enter the num of which you want to addition";
	cin>>num1>>num2;
	sum(num1,num2);
}
