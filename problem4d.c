#include <stdio.h>

int dectoarray( int num ) ;
int arr[ ];
int num, y, x=999;

int main(){

for ( y=999; y > 0; y-- ){

	num = x * y;
	
	dectoarray(num); //puts decimal 'num' into array 'arr'
	
	printf("%d%d%d%d%d%d " , arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);
	if ( (arr[0]==arr[5]) && (arr[1]==arr[4]) && (arr[2]==arr[3]) ){
	   printf("%d is the highest palindromic number.\n" , num);
       }
	}
}
int dectoarray( int num ){
   unsigned int dig=6;
   while (dig--) {
     arr[dig]=num%10;
     num/=10;
   }
return 0;
}
