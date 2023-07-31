#include<iostream>
using namespace std;
int main(void){
	char d,e,f;
	cout<<"does the computer turn on";
	cin>>d;
	
	if(d=='Y'){
		cout<<"are there any error message?";
		cin>>e;
		if(e=='y'){
		cout<<"perform a search";
	}
	else if(e=='N'){	
		cout<<"computer is fine";
	}
}

else if(d=='N'){
	cout<<"is the computer power light on";
	cin>>f;
	if(f=='Y'){
	cout<<"turn the computer moniter is on";	
	}
	else if(f=='N'){
		cout<<"check the compuer cord";
	}
}

return 0;
}