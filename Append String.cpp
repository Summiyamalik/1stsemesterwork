#include"iostream"
using namespace std;

bool prime(int n)
{
	for(int a=2;a<n;a++)
	{
		if(n%a == 0)
		return false;
	}
	return true;
}


int main()
{
int c=11;
for(int i=1;i<=c;i++)
{
	if(prime(i))
	{
		cout<<i<<endl;
	}
}
}