#include <stdio.h>

int main(){
	int arr[5] = {};
	
	for ( int i = 0 ; i < 5 ; i++){
		printf("\n Nhap phan tu thu %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\n Phan tu cua mang Arr: " );
	for ( int i = 0 ; i < 5 ; i++){
		printf("\t%d",arr[i] );
		
	}
	
	return 0;
}
