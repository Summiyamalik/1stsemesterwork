#include<iostream>
using namespace std;
int main(void){
	bool n1,n2,n3;
	cout<<"does the computer turn on";
	cin>>n1>>n2>>n3;
	if(n1>=n2){
		if(n1>=n3)
		cout<<"are there any error message?";
		else
		cout<<"is the computer power light on?";
	}
	else{
		if(n2>=n3)
		cout<<"perform a search for the error message";
		else
		cout<<"computer is fine";
	}
	/*else{
		if(n3>=n1)
		cout<<"turn the computer monitor on";
		else
		cout<<"check the computer power cord";
	}*/
   return 0;
	
}