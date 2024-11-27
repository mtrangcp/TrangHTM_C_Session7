#include <stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu cho mang: ");
	scanf("%d", &n);
	
	if ( n < 1 ){
		printf("Du lieu ban nhap khong hop le. Vui long nhap so nguyen duong!");
		return 1;
	}
	
	int arr[n] ;
	
	for ( int i = 0 ; i < n; i++){
		printf("\n Nhap phan tu thu %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\n Phan tu cua mang: " );
	for ( int i = 0 ; i < n ; i++){
		printf("\t%d",arr[i] );
	}
	
	return 0;
}
