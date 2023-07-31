#include<iostream>
using namespace std;
int main(void){
	int i,j,k;
	for(i=1;i<=8;i++)
{
	for(k=8-i;k>0;k--)
	cout<<" ";
	for(j=1;j<=i;j++)
		cout<<" *";
	cout<<endl;
}
return 0;

}