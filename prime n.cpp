#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std ;
int main(){
	int ch,r;
char a[50];
char b[50];
cout<<"your name is";
gets(a);
cout<<"you last name";
gets(b);
cin>>ch;
r=strncmp(a,b,ch);
if (r==0){
	cout<<"equal";
}
else if(r>0){
	cout<<"greaotr";
} 
else
{
	cout<<"less than";
}
}