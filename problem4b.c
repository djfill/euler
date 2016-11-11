#include <stdio.h>

int dectoarray( int num ) ;
int arr[8];
int num, x=999, y=999;

int main(){

num = x * y;

dectoarray(num); //puts decimal 'num' into array 'arr'
if ( (arr[0]==arr[7]) && (arr[1]==arr[6]) && (arr[2]==arr[5]) && (arr[3]==arr[4]) ){
	printf("%d is the highest palindromic number.\n" , num);
}


return 0;

}

int dectoarray( int num ){
   unsigned int dig=8;
   while (dig--) {
     arr[dig]=num%10;
     num/=10;
   }
return 0;
}
