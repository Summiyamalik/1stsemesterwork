#include<iostream>
using namespace std;

int main(){
	
	
	int n;
	cout<<"ENTER A NUMBER"<<endl;
	cin>>n;
	
	if(n==0){
			cout<<"NUMBER IS ZERO"<<endl;
		}
		
	if(n>0){
	
	cout<<"NUMBER IS POSITIVE"<<endl;
	
	if(n%2==0){
		cout<<"NUMBER IS EVEN"<<endl;
	}	
	else{
		cout<<"NUMBER IS ODD"<<endl;
	}
		
	}	if(n<0){
			
			cout<<"ENTER IS NEGATIVE"<<endl;
		}
		
		
		
		
	
	return 0;
}