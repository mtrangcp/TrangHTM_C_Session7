#include <stdio.h>

int main(){
	int row, col;
	printf("Nhap so hang cho mang: ");
	scanf("%d", &row);
	printf("Nhap so cot cho mang: ");
	scanf("%d", &col);
	
	if ( row < 1 || col < 1){
		printf("\nDu lieu ban nhap khong hop le. Vui long nhap so nguyen duong!");
		return 1;
	}
	
	int arr[row][col] ;
	
	for ( int i = 0 ; i < row ; i++){
		for ( int j = 0 ; j < col ; j++){
			printf(" Nhap phan tu thu %d cua hang %d: ",j+1, i+1);
			scanf("%d", &arr[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Phan tu cua mang: \n" );
	for ( int i = 0 ; i < row ; i++){
		for ( int j = 0 ; j < col ; j++){
			printf("\t%d ", arr[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
