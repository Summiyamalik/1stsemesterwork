#include<iostream>
using namespace std;
int main(){
	int xyz[3][4]={{1,2,3,4},{12,34,13,14},{14,56,67,89}};
	int r ,c;
	for(r=0;r<=2;r++)
	{
		for(c=0;c<=3;c++)
		{
			cout<<xyz[r][c]<<"\t";
		}
		cout<<endl;
	}
}