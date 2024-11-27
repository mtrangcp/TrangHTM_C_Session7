#include <stdio.h>
#include <stdbool.h>

int main(){
	bool check = false;
	int n ;
	printf("Nhap so phan tu cho mang: ");
	scanf("%d", &n);
	
	if ( n < 1 ){
		printf("Du lieu ban nhap khong hop le. Vui long nhap so nguyen duong!");
		return 1;
	}
	
	int arr[n] ;
	
	for ( int i = 0 ; i < n ; i++){
		do {
			printf("\n Nhap phan tu thu %d: ",i+1);
			scanf("%d", &arr[i]);
			if ( arr[i] % 2 == 0 ){
				check = true;
			}else{
				check = false;
			}
		}while(check);
	}
	
	printf("\n Phan tu cua mang: " );
	for ( int i = 0 ; i < n ; i++){
		printf("\t%d",arr[i] );
	}
	
	return 0;
}
