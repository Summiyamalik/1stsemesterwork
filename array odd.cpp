#include<iostream>
using namespace std;
void ftn(int arra[3][3]);
int main(){
	int a[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"enter the number";
			cin>>a[i][j];
		}
	}
	ftn(a);
	system("pause");
	return 0;
}
void ftn(int arra[3][3])
{
	int n=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(arra[i][j]%2!=0)
			{
				cout<<"this number is an odd number"<<arra[i][j]<<endl;
				n++;
			}
	    }
    }
	cout<<"there total"<<n<<"odd numbers!"<<endl;
}