#include <iostream>
using namespace std;

int main() {
	int sum=0;
    for (int i = 1; i <= 10; i++) {
        // condition to continue
        if (i == 3) {
            continue;
            sum+=i;
        }

        cout << i << endl;
    }
    cout<<"sum="<<sum;

    return 0;
}