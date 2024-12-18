#include<stdio.h>
#include<stdlib.h>
void addArr(int *num, int *size);
void showArr(int *num, int size);
void lengthArr( int size);
void sumArr(int *num, int size);
void arrMax(int *num, int size);

int main(){
	int choice, temp = 0;
	int size, num[100];
	do{
		printf("\n********MENU********");
		printf("\n1. Nhap vao so phan tu va gia tri cac phan tu");
		printf("\n2. In ra cac phan tu cua mang");
		printf("\n3. Tinh do dai cua mang");
		printf("\n4. Tinh tong cac phan tu cua mang");
		printf("\n5. Tim gia tri lon nhat cua mang");
		printf("\n6. Thoat");
		printf("\n\tLua chon cua ban: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				temp = 1; 
				addArr(num,&size);
				break;
			case 2:
				if(temp==1){
					showArr(num,size);
				}else{
					printf("Mang chua co du lieu!! Chon 1 de nhap"); 
				} 
				
				break;
			case 3:
				if(temp==1){
					lengthArr(size);
				}else{
					printf("Mang chua co du lieu!! Chon 1 de nhap"); 
				}  
				
				break;
			case 4:
				if(temp==1){
					sumArr(num,size);
				}else{
					printf("Mang chua co du lieu!! Chon 1 de nhap"); 
				}
				break;
			case 5:
				if(temp==1){
					arrMax(num, size);
				}else{
					printf("Mang chua co du lieu!! Chon 1 de nhap"); 
				}
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("\nMoi chon lai 1 -> 6");
		}			
	}while(1);
	return 0;
}
void addArr(int *num, int *size){
	printf("Moi nhap so phan tu cua mang: ");
	scanf("%d",&(*size));
	for(int i = 0; i<*size; i++){
		printf("\nMoi nhap phan tu thu %d: ", i+1);
		scanf("%d",&*(num+i));
	}
}

void showArr(int *num, int size){
	printf("\nMang da nhap vao la: \n");
	for(int i=0; i<size; i++){
		printf("%d\t",*(num+i));
	}
}

void lengthArr( int size){
	printf("\nDo dai cua mang la: %d", size);
}

void sumArr(int *num, int size){
	int total = 0;
	for(int i=0; i<size; i++){
		total+=*(num+i);
	}
	printf("\nTong cua cac phan tu trong mang la: %d", total);
}
void arrMax(int *num, int size){
	int max= *num ;
	for(int i=0; i<size; i++){
		if(max<*(num+i)){
			max=*(num+i);
		}
	}
	printf("\n Max cua mang la: %d", max);
}



