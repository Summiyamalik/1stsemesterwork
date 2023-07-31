#include"iostream"
using namespace std;
int main()
{
char str1[50];	
char str2[50];	
string str3;

cout<<"Enter Any Sentence 1 : ";
gets(str1);
cout<<"Enter Any Sentence 2 : ";
gets(str2);

cout<<endl;

str3=str1+str2;
 
cout<<"After Concatenate String 1 Is"<<endl<<str3;

return 0;
}
