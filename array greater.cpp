#include<iostream>
using namespace std;
int main(){
	int a[5];
	for(int i=0;i<5;i++)
	{
		cout<<"enter a number"<<endl;
		cin>>a[i];
	}
	cout<<endl;
	if(a[0]>a[1]&&a[0]>a[2]&&a[0]>a[3]&&a[0]>a[4])
	{ cout<<a[0]<<"is greater"; }
	else if(a[1]>a[0]&&a[1]>a[2]&&a[1]>a[3]&&a[1]>a[4])
	{ cout<<a[1]<<"is greater"; }
      else if(a[2]>a[0]&&a[2]>a[1]&&a[2]>a[3]&&a[2]>a[4])
	{ cout<<a[2]<<"is greater"; }
	else if(a[3]>a[0]&&a[3]>a[1]&&a[3]>a[2]&&a[3]>a[4])
	{ cout<<a[3]<<"is greater"; }
	else if(a[4]>a[0]&&a[4]>a[1]&&a[4]>a[2]&&a[4]>a[3])
	{ cout<<a[4]<<"is greater"; }
}