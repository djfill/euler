#include <stdio.h>

int main(){
	
//Then, you can store them in an array:

int num=12345678; //for example
unsigned int dig=8;
int arr[8];
while (dig--) {
 arr[dig]=num%10;
 num/=10;
}

printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n" , arr[7], arr[6], arr[5], arr[4], arr[3], arr[2] , arr[1], arr[0] );

}
