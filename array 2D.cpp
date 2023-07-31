#include<iostream>
using namespace std;
int main(){
	int a[2][3],s,k;
	cout<<"input data into table"<<endl;
	s=0;
	while(s<=1)
	{
		k=0;
		while(k<=2)
		{
			cout<<"enter value in row";
			cout<<s<<"column"<<k<<"=";
			cin>>a[s][k];
			k=k+1;
		}
		s=s+1;
	}
	cout<<"printing data from table"<<endl;
	s=0;
	while(s<=1)
	{
		k=0;
		while(k<=2)
		{
			cout<<a[s][k]<<"\t";
			k=k+1;
		}
		cout<<endl;
		s=s+1;
	}
}