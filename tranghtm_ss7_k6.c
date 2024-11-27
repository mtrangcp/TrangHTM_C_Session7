#include <stdio.h>

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	
	printf("\n Phan tu ban dau cua mang: " );
	for ( int i = 0 ; i < 5 ; i++){
		printf("\t%d",arr[i] );
		if ( arr[i] % 2 == 0){
			arr[i] += 3;
			 
		}else{
			arr[i] += 2;
		}
	}
	
	printf("\n Phan tu moi cua mang: " );
	for ( int i = 0 ; i < 5 ; i++){
		printf("\t%d",arr[i] );
	}
	
	return 0;
}
