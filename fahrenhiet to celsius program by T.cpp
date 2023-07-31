#include<iostream>
using namespace std;
int main(void){
	float celsius,celsius2,fahrenhiet,fahrenhiet2;
	cout<<"enter celsius value Did u want to be change in fahrenhiet = ";
	cin>>celsius;
	fahrenhiet=(celsius + 32)*9/5;
	cout<<"here is in fahrenhiet = "<<fahrenhiet<<endl;
	cout<<"Enter fahrenhiet value Did you want to be change in celsius = ";
	cin>>fahrenhiet2;
	celsius2=(fahrenhiet2 - 32)*5/9;
	cout<<"here is in celsius = "<<celsius2<<endl;
	cout<<"program has been end"<<endl<<"thanks for using this program ";
	return 0;
}