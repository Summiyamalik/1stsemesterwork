#include <iostream>
using namespace std;
int main(){
	int sum=0,c[6]={1,2,3,4,5,6};
	for(int i=0;i<6;i++){
		sum+=c[i];
	}
	cout<<sum;
	return 0;
}