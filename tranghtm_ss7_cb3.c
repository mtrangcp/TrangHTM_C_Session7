#include <stdio.h>

int main(){
	int arr[5] = {1, 2, 3,23, 5};
	
	printf(" \nso chan:  ");
	int check = 0;
	for ( int i = 0 ; i < 5 ; i++){
		if ( arr[i] % 2 == 0){
			printf("\t%d", arr[i]);
			check++;
		}
	}
	if ( check == 0){
		printf(" k co so chan!\n");
	}
	
	return 0;
}
