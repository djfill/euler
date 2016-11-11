#include <stdio.h>

int dectoarray( int num ) ;
unsigned int count(unsigned int i) ;
unsigned int dig, amount; 
int arr[6];
int num, y, x, max;

int main(){

for ( y=999; y > 0; y-- ){

	for ( x=999; x > 0; x-- ){
	num = x * y;
	
	dectoarray(num); //puts decimal 'num' into array 'arr'
	
	//printf("%d " , amount);
	
    if ( amount == 6 ){
	   if ( (arr[0]==arr[5]) && (arr[1]==arr[4]) && (arr[2]==arr[3]) ){
	      if ( num > max){
		   max = num;
		  }
		   //printf("%d is the highest palindromic number.\n" , num);
          }
	   }
    
	if ( amount == 5 ){
	   if ( (arr[0]==arr[4]) && (arr[1]==arr[3]) ){
	      //printf("%d is the highest palindromic number.\n" , num);
          }
	   }
	
	if ( amount == 4 ){
	   if ( (arr[0]==arr[3]) && (arr[1]==arr[2]) ){
	      //printf("%d is the highest palindromic number.\n" , num);
          }
	   }
	}
}
printf("%d is the highest palindromic number.\n" , max);
return 0;
}

int dectoarray( int num ){
   dig=count(num);
   amount=dig;
   while (dig--) {
     arr[dig]=num%10;
     num/=10;
   }
return 0;
}

unsigned int count(unsigned int i) {
 unsigned int ret=1;
 while (i/=10) ret++;
 return ret;
}