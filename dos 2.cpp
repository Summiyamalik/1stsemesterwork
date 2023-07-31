#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main(){
	ifstream fin;
	fin.open("out.txt");
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		cout<<ch;
	}
	fin.close();
	getch();
	return 0;
}