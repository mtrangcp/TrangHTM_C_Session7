#include <stdio.h>

int check ( int num ){
	if ( num <= 1 ){
		return 0;
	}
	for ( int i = 2; i < num; i++){
		if ( num % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int n, count = 0;
	printf("Nhap so phan tu cho mang: ");
	scanf("%d", &n);
	
	if ( n < 1 ){
		printf("Du lieu ban nhap khong hop le. Vui long nhap so nguyen duong!");
		return 1;
	}
	
	int arr[n] ;
	
	for ( int i = 0 ; i < n ; i++){
		printf("\n Nhap phan tu thu %d: ",i+1);
		scanf("%d", &arr[i]);
	}
	
	printf("\n Phan tu cua mang: " );
	for ( int i = 0 ; i < n ; i++){
		printf("\t%d",arr[i] );
	}
	
	printf("\n So nguyen to co trong mang: " );
	for ( int i = 0 ; i < n ; i++){
		if ( check(arr[i]) == 1 ){
			printf("\t%d",arr[i] );
			count++;
		}
	}
	if ( count == 0 ){
		printf("\t K co so nguyen to trong mang: " );
	}
	
	return 0;
}
