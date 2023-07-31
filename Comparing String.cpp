#include"iostream"
using namespace std;
int main()
{
char a[50];	
char b[50];	
int c,d;

cout<<"Enter Any Sentence 1 : ";
gets(a);
cout<<"Enter Any Sentence 2 : ";
gets(b);
cout<<"Enter Number of Digits To Compare : ";
cin>>c;


d=strncmp(a,b,c);

if(d<0)
{
	cout<<"String 1 Is Greater Than String 2";
}
else if(d==0)
{
	cout<<"String 1 Is Equal To String 2";
}
else if(d>0)
{
	cout<<"String 1 Is Lesser Than String 2";
}

return 0;
}