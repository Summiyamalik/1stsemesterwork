#include<iostream>
using namespace std;
int main(){
	int a[5]={11,12,13,14,15};
	int b[5];
	b[0]=a[0];
	b[1]=a[1];
	b[2]=a[2];
	b[3]=a[3];
	b[4]=a[4];
	for(int i=0;i<5;i++)
	{
		cout<<b[i]<<endl;
	}
}