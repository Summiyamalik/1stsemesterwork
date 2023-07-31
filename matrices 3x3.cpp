#include <iostream>
using namespace std;
int main()
{
	int sum,i,j;
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int arr1[3][3]={{11,12,13},{14,15,16},{17,18,19}};
	cout<<"1st matrix"<<endl;
	for (int i=0; i<3; i++)
    {
    	for (int j=0; j<3; j++)
    	{
    		cout<<arr[i][j]<<"\t";
		}
		cout<<endl;
	} 
	cout<<"2nd matrix"<<endl;
	for (int i=0; i<3; i++)
    {
    	for (int j=0; j<3; j++)
    	{
    		cout<<arr1[i][j]<<"\t";
		}
		cout<<endl;
	} 
	cout<<"added matrix"<<endl;
	for (int i=0; i<3; i++)
    {
    	for (int j=0; j<3; j++)
    	{
    		cout<<arr[i][j]+arr1[i][j]<<"\t";
		}
		cout<<endl;
	}
}