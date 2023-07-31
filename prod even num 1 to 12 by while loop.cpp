#include<iostream>
using namespace std;
int main(void){
	/* Initialize i with 1. */
 
    int i=1;
 
   /* If i is less than or equal to 12. */
 
   while( i <= 12){
  
      /* If number is divisible by 2, then print.*/
  
      if(i % 2 == 0){
   
         cout <<i<< " ";
      }
  
     /* Increment i. */
  
     i++;
 }
 
 return 0;
	
}