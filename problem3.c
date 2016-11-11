// Works but takes too long and is very cpu hungry...
#include <stdio.h>
#include <stdlib.h>

long a, b = 600851475143 ;

int main(){
	for ( a = 600851475142; a > 1; a-- ) {
		if ( a % b == 0 ) {
			printf ( "Answer = %ld\n" , a ) ;
			return 0;
		}
		else{
			printf ( "Not %ld\n" , a ) ;
		}
	}
}