#include <iostream>
using namespace std;
int main(void){
	int a,b;
	cout<<"Enter a value of a=";
	cin>>a;
	cout<<"Enter a value of b=";
	cin>>b;
	for(int i=0;i<b;i++){
		a*=a;
	}
	cout<<a;
	return 0;
}