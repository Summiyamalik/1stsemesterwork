#include"iostream"
using namespace std;
int main(void){
	int num;
	cout<<"Enter your marks = ";
	cin>>num;
	if(num >= 80){
		cout<<"you got 'A' Grade";
	}
	else if(num >= 60){
		cout<<"you got 'B' Grade";
	}
	else if(num >= 40){
		cout<<"yoy got 'C' Grade";
	}
	else if(num < 40){
		cout<<"you Are Fail In this Exam";
	}
	return 0;
}