#include <stdio.h>

void findnumber( int num );
int num = 1;

int main()
{

findnumber( num );

return 0;

}

void findnumber( int num ){
//	if( num % 13 == 0 ){  stops working here
//		if( num % 12 == 0 ){
//			if( num % 11 == 0 ){
				if( num % 10 == 0 ){
					if( num % 9 == 0 ){
						if( num % 8 == 0 ){
							if( num % 7 == 0 ){
								if( num % 6 == 0 ){
									if( num % 5 == 0 ){
										if( num % 4 == 0 ){
											if( num % 3 == 0 ){
												if( num % 2 == 0 ){
													if( num % 1 == 0 ){
														printf("%d\n" , num );
														return;
													}
												}
												else{
												num++;
												}
											}
											else{
											num++;
											}
										}
										else{
										num++;
										}
									}
									else{
									num++;
									}
								}
								else{
								num++;
								}
							}
							else{
							num++;
							}
						}
						else{
						num++;
						}
					}
					else{
					num++;
					}
				}
				else{
				num++;
				}
//			}
//			else{
//			num++;
//			}
//		}
//		else{
//		num++;
//		}
//	}
//	else{
//	num++;
//	}
	findnumber( num );
}
	