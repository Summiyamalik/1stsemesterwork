#include<iostream>
using namespace std;
int main(){
	int a[5]={4,19,23,2,45};
	for(int u=5;u>=1;u--)
	{
		for(int i=0;i<u;i++)
		{
			if(a[i]<a[i+1])
			{
				int t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	cout<<"sorted value"<<endl;
	for(int i=0;i<=5;i++)
	cout<<a[i]<<endl;
}