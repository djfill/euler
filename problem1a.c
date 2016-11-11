#include <stdio.h>
#include <stdlib.h>

int i, a, b ;
int total = 0;

int main()
{
   for ( i = 1; i < 1000; i++) {
	   a = i % 3 ;
	   b = i % 5 ;
	   if ( (a == 0) || (b == 0) )
	   {
		   total = total + i ;
	   }
   }
   printf ( "Total = %d \n" , total ) ;
   return 0;
}