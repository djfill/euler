// This program displays the total of natural numbers that are mulitples of 3 or 5 below 1000.
#include <stdio.h>
#include <stdlib.h>

int i ;
int total = 0;

int main()
{
   for ( i = 1; i < 1000; i++) {
	   if ( (i % 3 == 0) || (i % 5 == 0) )
	   {
		   total = total + i ;
	   }
   }
   printf ( "Total = %d \n" , total ) ;
   return 0;
}