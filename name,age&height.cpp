#include<iostream>
#include<iomanip>
using namespace std;
int main(void){
	char gender;
	cout <<"enter your gender (f/m): " <<endl;
	cin >>gender;
	if(gender=='f')
	{
	cout <<"you are female: " <<endl;	
	}
		string name ;
	
	cout <<"enter your name: " <<endl;
	cin >>name;
	
	int age;
	cout <<"enter your age: " <<endl;
	cin >>age;
	if(age>20)
	{
		cout <<"the age entered is incorrect: " <<endl;
	}
	
	float height;
	cout <<"enter your height: " <<endl;
	cin >>height;
	if(height>7)
	{
		cout <<"the height entered is incorrect: " <<endl;
	}
	return 0;
}