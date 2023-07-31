#include<iostream>
using namespace std;
int main(){
	int a=2; int b=1; int summiya[5];
	summiya[0]=a;
	cout<<summiya[0]<<endl;
	summiya[a]=75;
	cout<<summiya[a]<<endl;
	b=summiya[a+2];
	cout<<b<<endl;
	summiya[summiya[a]]=summiya[2]+5;
	cout<<summiya[summiya[a]]<<endl;
	
}