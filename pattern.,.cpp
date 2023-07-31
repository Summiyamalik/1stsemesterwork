#include<iostream>
using namespace std;
int main(void){
	int i,j,k;
	for(i=6;i>=1;i--)
{
	for(k=6-i;k>0;k--)
	cout<<" ";
	for(j=i;j>0;j--)
	{
		cout<<"*";
	}
	cout<<endl;
}
return 0;

}