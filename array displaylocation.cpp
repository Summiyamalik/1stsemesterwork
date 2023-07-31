#include<iostream>
using namespace std;
int main(){
	int a[5],integer,pos;
	for(int i=0;i<5;i++)
	{
		cout<<"enter a value"<<endl;
		cin>>a[i];
	}
	pos=0;
	cout<<"enter an integer"<<endl;
	cin>>integer;
	for(int i=0;i<5;i++)
	{
		if(integer==a[i])
         
         {
         	pos=i+1;
         	break;
		 }
	}
	if(pos==0)
	cout<<"number not found";
	else
	cout<<"number found at position";
	cout<<pos;
}