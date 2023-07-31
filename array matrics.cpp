#include <iostream>
using namespace std;
int main(){
	int c[3][2]={{2,3},{4,1},{6,2}};
	for (int row=0;row<3;row++){
		for(int col=0;col<2;col++){
			cout<<c[row][col];
		}
	}
	return 0;
	
}