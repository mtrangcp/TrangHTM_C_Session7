#include <stdio.h>

int main(){
	int arr[5] = {34, 1, 56 ,88, 90};
	
	printf("Phan tu trong mang arr: ");
	for ( int i = 0; i< 5; i++){
		printf("\t%d", arr[i]);
	}
	
	printf("\n\nDo dai mang arr: %d", sizeof(arr)/sizeof(int));
	
	return 0;
}
