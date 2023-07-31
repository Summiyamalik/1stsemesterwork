#include<iostream>
using namespace std;
int main(void){
	int i,j,k;
	for(i=4;i>=1;i--)
{
	for(k=4-i;k>0;k--)
	cout<<" ";
	for(j=i;j>0;j--)
		cout<<"* ";
	cout<<endl;
}
return 0;

}