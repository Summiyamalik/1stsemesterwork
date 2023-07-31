#include<iostream>
using namespace std;
int main(){
	
	   char str1[50]= "TWINKLE TWINKLE ";
	   char str2[50]= "LITTLE STAR ";
	   cout<<"1st string "<<endl;
	   puts(str1);
	   cout<<"2nd string "<<endl;
	   puts(str2);
	   strcat(str1,str2);
	   cout<<"1st string after concatenation "<<endl;
	   puts(str1); 
	   cout<<"2nd string after concatenation "<<endl;
	   puts(str2); 
	   strlen(str1);
	   cout<<"Length of 1st string "<<strlen(str1)<<endl;
	   strlen(str2);
	   cout<<"Lenght of 2nd string "<<strlen(str2)<<endl;
	   strcpy(str1,str2);
	   cout<<"COPY 1st STRING "<<endl;
	   puts(str1);
	   cout<<"2nd STRING "<<endl;
	   puts(str2);
	   strcmp(str1,str2);
	   cout<<"Number of both digits "<<strcmp<<endl;
	                                                        
	  return 0;                                                           
	                                                             	
}