#include<iostream>
using namespace std;
int main(){
	int a[5]={4,19,1,3,5};
	for(int u=0;u<5;u++)
	{
		int m=a[u];
      for(int i=u;i<=5;i++)
    if( m>a[i])
	{
		m=a[i];
		int p=i;
		int t=a[p];
		a[p]=a[u];
		a[u]=t;
	  }  
	  cout<<"sorted value"<<endl;
	  for(int i=0;i<=5;i++)
	  cout<<a[i]<<endl;
	}
    	
}