#include <iostream>
using namespace std;

float mul(float a, float b){
	cout<<a*b<<endl;
	return (a*b);
}
float mul(float a,float b,float c,float d, float e){
	cout<<a*b*c*d*e<<endl;
	return (a*b*c*d*e);
}
int main(){
	int a,b,c,d,e;
	cout<<"enter the five numbers"<<endl;
	cin>>a>>b>>c>>d>>e;
	mul(a,b);
	mul(a,b,c,d,e);
}