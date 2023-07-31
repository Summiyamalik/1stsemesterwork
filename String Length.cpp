#include"iostream"
using namespace std;
int main()
{
char a[50];	
char b[50];	
int c;
cout<<"Enter Any Sentence 1 : ";
gets(a);
cout<<"Enter Any Sentence 2 : ";
gets(b);

char c=strncpy(char b,char a);

cout<<"Length of Sentence 1 : "<<c;

return 0;
}