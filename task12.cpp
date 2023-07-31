#include"iostream"
using namespace std;
int main(void){
	int age, mon_age, days_age, hr_age, min_age, sec_age, yr_age;
	cout<<".........Hi Im SUMMIYA here........."<<endl<<endl;
	cout<<"Enter your age=";
	cin>>age;
	mon_age=age*12;
	cout<<"age in month="<<mon_age<<endl;
	days_age=mon_age*365;
	cout<<"age in days="<<days_age<<endl;
	hr_age=days_age*24;
	cout<<"age in hours="<<hr_age<<endl;
	min_age=hr_age*60;
	cout<<"age in minutes="<<min_age<<endl;
	sec_age=min_age*60;
	cout<<"age in second="<<sec_age<<endl;
	return 0;
}