#include<iostream>
using namespace std;
int main(){
	int summiya[5];
	for(int i=0;i<5;i++)
	{
		cout<<"enter a number"<<endl;
		cin>>summiya[i];
	}
	cout<<endl;
	cout<<"enter the reverse order"<<endl;
	for(int i=5;i>=0;i--)
	{
		cout<<summiya[i]<<endl;
	}
}