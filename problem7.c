#include <stdio.h>

int main()
{
  int i, j, a, c, b, add, pnum;

  for( i = 2; i <= 105000; i++ )
  {
	a = i - 1 ;
	c = 0 ;
    for( j = 2; j < a; j++ )
    {
		if ( i % j == 0 ){
			c = c + 1 ;
		}
    }
	if ( c == 0 ){
		add = add + 1 ;
		if ( add == 10001 ){
		   printf( "Prime number %d = %d\n" , add , i ) ;
	    }
	}

  }
 
 

 return 0;
}
