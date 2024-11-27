#include <stdio.h>

int main(){
	int mang[5] = {21, 1, 3, 109, 91};
	int max  = mang[0] , min = mang[0];
	
	for ( int i = 0 ; i < 5 ; i++){
		printf(" arr[%d] = %d \n",i+1, mang[i]);
		
		if ( mang[i] > max){
			max = mang[i];
		}
		if ( mang[i] < min){
			min = mang[i];
		}
	}
	printf("\n max =  %d \n min = %d", max, min);
	
	return 0;
}
