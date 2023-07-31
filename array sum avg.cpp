#include<iostream>
using namespace std;
int main(){
	int s[5];
	int sum=0,avg;
	for(int i=0;i<5;i++)
	{
		cout<<"enter a number"<<endl;
		cin>>s[i];
	}
	for(int i=0;i<5;i++)
	{
		sum+=s[i];
	}
	cout<<"sum of 5 number"<<sum<<endl;
	avg=sum/5;
	cout<<"average of 5 number"<<avg;
	
}