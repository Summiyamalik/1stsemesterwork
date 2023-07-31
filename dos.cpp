#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream fout;
	fout.open("out.text");
	char str[300]="this is me summiya";
	fout<<str;
	fout.close();
	return 0;
}