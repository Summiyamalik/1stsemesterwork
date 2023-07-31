#include <iostream>
using namespace std;

int add(int a, int b){
	cout<<a+b<<endl;
	return (a+b);
}
int add(int a,int b,int c){
	cout<<a+b+c<<endl;
	return (a+b+c);
}
int main(){
	int a,b,c;
	cout<<"enter the three numbers"<<endl;
	cin>>a>>b>>c;
	add(a,b);
	add(a,b,c);
}