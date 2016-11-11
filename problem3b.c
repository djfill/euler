#include <stdio.h>

void prime();
void factor();
int primenos[1000];
int x;
int input, primeno, store;

int main(){
printf("Enter number for which you would like to find the highest prime factor: ");
scanf("%d" , &input);
prime();
	
x = 1 ;
primeno = primenos[x] ;
factor();

}

void factor(){
	if ( primeno == input ){
		printf( "Largest prime factor = %d\n" , primeno ) ;
	}
	else{
		if ( input % primeno == 0 ){
			store = primeno ;
			input = input / primeno ;
			primeno = primenos[x] ;
			factor();
		}
		else{
			x = x + 1 ;
			primeno = primenos[x] ;
			factor();
		}
	}
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