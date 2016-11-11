#include <stdio.h>

int dectoarray( int num ) ;
int arr[8];
int num;

int main(){

printf("Enter an 8 digit decimal: ");
scanf("%d" , &num);
dectoarray(num);
printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n" , arr[7], arr[6], arr[5], arr[4], arr[3], arr[2] , arr[1], arr[0] );
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
