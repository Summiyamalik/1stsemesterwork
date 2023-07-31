#include<iostream>
using namespace std;
int min(int a,int b,int c){
		if(a<b && a<c)
	  cout<<a<<" is min:"<<endl;
	  if(b<a && b<c)
	  cout<<b<<" is min:"<<endl;
	  if(c<a && c<b)
	cout<<c<<"\n is min:"<<endl;}
int max(int a, int b, int c){
		if(a>b && a>c)
	  cout<<a<<" is max:"<<endl;
	  if(b>a && b>c)
	  cout<<b<<" is max:"<<endl;
	  if(c>a && c>b)
	cout<<c<<" is max:"<<endl;}
int evennumbers(int N=5){
	cout<<"Even =";
	for (int i = 1; i <= 2 * 5; i++){
		if (i % 2 == 0)
            cout << i << " ";}}
int oddnumbers(int N=5){
	cout<<"\n\nOdd :";
	for (int i = 1; i <= 2 * 5; i++){
		if (i % 2 != 0)
            cout << i << " ";}}
int naturalnumber(int N){
	int i;
	cout<<"\n\nNatural number :";
	for( i = 1; i <= 100; i++) {
		cout << i << " ";}}    
int wholenumber(int N){
		int i;
	cout<<"\n\nWhole number :";
	for( i = 0; i <= 200; i++){
		cout << i << " ";} }    
int primenumber(int n){
	int i;
	cout<<"\n\nPrime number :";
	for (int i=2; i<100; i++) 
        for (int j=2; j<i; j++){
        	if (i % j == 0) 
                break;
            else if (i == j+1)
                cout << i << " ";}}    
int main(){
	int a,b,c;
	int N,n;
	cout<<"Enter all the number ="<<endl;
	cin>>a>>b>>c>>N;
	min(a,b,c);
	max(a,b,c);
	evennumbers(N);
	oddnumbers(N);
	naturalnumber(N);
	wholenumber(N);
	primenumber(n);
	}