#include <stdio.h>

int main(){

unsigned int count(unsigned int i);
	
	
//Then, you can store them in an array:

int num=12345678; //for example
unsigned int dig=count(num);
int arr[dig];
while (dig--) {
 arr[dig]=num%10;
 num/=10;
}

printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n" , arr[7], arr[6], arr[5], arr[4], arr[3], arr[2] , arr[1], arr[0] );

}

unsigned int count(unsigned int i) {
 unsigned int ret=1;
 while (i/=10) ret++;
 return ret;
}