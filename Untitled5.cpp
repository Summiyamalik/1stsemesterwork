#include<iostream>
using namespace std;

int min(int a,int b,int c){
		if(a<b && a<c)
	  cout<<a<<" is min:"<<endl;
	  if(b<a && b<c)
	  cout<<b<<" is min:"<<endl;
	  if(c<a && c<b)
	cout<<c<<" is min:"<<endl;
}
int average(int a,int b,int c){
int	avg=(a+b+c)/3;
	cout<<avg<<"average ="<<endl;
	return avg;
}
int max(int a, int b, int c){
		if(a>b && a>c)
	  cout<<a<<" is max:"<<endl;
	  if(b>a && b>c)
	  cout<<b<<" is max:"<<endl;
	  if(c>a && c>b)
	cout<<c<<" is max:"<<endl;
	
}

int main(){
	int a,b,c;
	cout<<"enter all the number ="<<endl;
	cin>>a>>b>>c;
	min(a,b,c);
	max(a,b,c);
	average(a,b,c);
}