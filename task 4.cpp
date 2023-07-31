#include <iostream>
using namespace std;

int main(void) {
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2) {
        if (n1 > n3)
            cout << "Largest number: " << n1;
        else
            cout << "Largest number: " << n3;
    }
    else {
        if (n2 > n3)
            cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }
    //cout<<"\nnumber of digit have"<<digit;
    

    return 0;
}