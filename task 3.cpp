#include"iostream"
using namespace std;
int main(void){
	int marks,A,B,C,D,grade,percentage,obtain;
	cout<<"input your marks";
	cin>>marks;
	percentage=obtain/200*100;
	if(percentage>=75){
		cout<<(grade= 'A');
		
	}
	else if(percentage>75&&percentage<=60)
	{
		cout<<(grade='B');
	}
	else if(percentage>60&&percentage<=45)
	{
		cout<<(grade='c');
	}
	else if(percentage>30)
	{
		cout<<(grade='D');
	}
	
	cout<<"print the grade of your score";
	cout<<percentage;
	return 0;
	
}