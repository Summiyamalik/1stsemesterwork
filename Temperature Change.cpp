#include <iostream>
using namespace std;
int main()
{
	float F,C;
	
	cout<<"Enter Temperature In Fahrenheit : ";
	cin >>F;
	
	C=(1.8)*(F-32);    //     5/9 = 1.8
	
	cout<<"Temperature In Centigrade : "<<C;
	
	return 0;
}