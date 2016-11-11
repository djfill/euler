#include <stdio.h>

void findnumber( int num );
int c, num = 1;

int main()
{

findnumber( num );

return 0;

}

void findnumber( int num ){
	
for ( c=10; c > 1; c-- ){
   if( num % c == 0 ){
	   
   }
   else{
   num++;
   }
   findnumber( num );
}

}
	
	
	
		if( num % 1 == 0 ){
											printf("%d\n" , num );
											return;
										}