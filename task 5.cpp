#include<iostream>
using namespace std;
int main()
{
    int i;
    float mark, sum=0, per;
    cout<<"Enter your five subjects Marks: ";
    for(i=0; i<5; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    per = sum/5;
    cout<<"\nGrade = ";
    if(per>=75)
        cout<<"A";
    else if(per<75 && per>=60)
        cout<<"B";
    else if(per<60 && per>=45)
        cout<<"C";
    else if(per<30)
        cout<<"D";
    else
        cout<<"Invalid!";
    cout<<endl;
    return 0;
}