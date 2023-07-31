#include"iostream"
#include"math.h"
using namespace std;
int main(void){
	int a, b;
    int sum, sub, mul;
    float div,mod;
    
    cout << "Enter any two numbers:\n";
    cin >> a >> b;

    // It will perform all arithmetic operations
    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = (float)a / b;
    mod = a % b;

    // It will print the final output of all arithmetic operations
    cout << endl;
    cout << "SUM:        " << a << " + " << b << " = " << sum << "\n";
    cout << "DIFFERENCE: " << a << " - " << b << " = " << sub << "\n";
    cout << "PRODUCT:    " << a << " * " << b << " = " << mul << "\n";
    cout << "QUOTIENT:   " << a << " / " << b << " = " << div << "\n";
    cout << "MODULUS:    " << a << " % " << b << " = " << mod << "\n";
    return 0;
}