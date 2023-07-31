#include <iostream>
using namespace std;
int small(int a,int b,int c,int d,int e)
{
	if(a<b && a<c && a<d && a<e)
	{cout<<a<<" Is Smallest";}
	else if(b<a && b<c && b<d && b<e)
	{cout<<b<<" Is Smallest";}
	else if(c<a && c<b && a<d && a<e)
	{cout<<c<<" Is Smallest";}
	else if(d<a && d<b && d<c && d<e)
	{cout<<d<<" Is Smallest";}
	else
	{cout<<e<<" Is Smallest";}}

int main(){
	int c=7,d=9,e=2,f=5,g=3;
	small(c,d,e,f,g);
		
	return 0;
}