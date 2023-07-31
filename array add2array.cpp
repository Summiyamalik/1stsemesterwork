#include<iostream>
using namespace std;
int main(){
	int a[5],b[5],c[5];
	cout<<"enter the value of first array"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"enter the value of first array"<<i<<"=";
		cin>>a[i];
	}
	
	cout<<"enter the value of second array"<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<"enter the value of second array"<<i<<"=";
		cin>>b[i];
	}
	cout<<"first+second=sum"<<endl;
	for(int i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
		cout<<a[i]<<"+"<<b[i]<<"="<<c[i]<<endl;
	}
	
	
}