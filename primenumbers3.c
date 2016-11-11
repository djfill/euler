#include <stdio.h>

int main()
{
  int i, j, a, c, b;


  for( i = 2; i <= 101; i++ )
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
		printf( "%d\n" , i ) ;
	}
  }
 

 return 0;
}
