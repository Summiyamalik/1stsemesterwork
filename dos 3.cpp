#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream a;
	a.open("Myfirstfile.txt");
	a<<"Hello World"<<endl;
	a<<"Ok Bye";
	return 0;
}