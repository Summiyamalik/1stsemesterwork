#include<iostream>
using namespace std;
int main (void){
	int i, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> i;

    for (int i = 1; i <= 10; i++) {
        sum += i;
        if(i==0)
        break;{
		
    }

    cout << "Sum = " << sum;
}
    return 0;
}