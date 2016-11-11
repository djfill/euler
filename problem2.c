#include <stdio.h>
#include <stdlib.h>

int total, i, c, a = 1, b = 1 ;

int main() {
	while ( c < 4000000 ){
		c = a + b ;
		if ( c % 2 == 0 ) {
			total = total + c ;
		}
		a = b ;
		b = c ;
	}
	printf ( "Total = %d \n" , total ) ;
}
