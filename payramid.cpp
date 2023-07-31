#include<iostream>
using namespace std;
int main(void){
	int i,j,k;
	for(int i=1;i<=4;i++)
{
	for(int k=4-i;k>0;k--)
	cout<<" ";
	for(int j=1;j<=i;j++)
		cout<<"Y ";
	cout<<endl;
}

	for(int i=4;i>=1;i--)
{
	for(int k=4-i;k>0;k--)
	cout<<" ";
	for(int j=i;j>0;j--)
		cout<<"X ";
	cout<<endl;
}

return 0;
}