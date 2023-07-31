#include"iostream"
using namespace std;
int main()
{
char str1[50];	
char str2[50];	
int c;

cout<<"Enter Any Sentence 1 : ";
gets(str1);
cout<<"Enter Any Sentence 2 : ";
gets(str2);

cout<<endl;

strcpy(str1,str2);
 
cout<<"After Append String 1 Is"<<endl<<str1;

return 0;
}
