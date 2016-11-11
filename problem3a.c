#include <stdio.h>

void prime();
int primenos[1000];

int main(){
	int input = 147, fact;

	prime();
	printf ( "%d\n" , primenos[11] ) ;
	return 0;
}

void prime ()
{
  int i, j, a, c, b;

  for( i = 2; i <= 1000; i++ )
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
		b = b + 1 ;
		primenos[b] = i ;
	}
  }
  return;
}