#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int addString( char *string, int *size);
int  printString(char *string, int size);
int  countIndex( char *string, int size, int count);
int countNum(char *string, int size, int count2);
int countSpecialIndex(char *string, int size); 

int main(){
	char string[100];
	int choice, size, count, count2, count3;
	int temp ; 
	do{
		printf("\n-------MENU-------\n");
		printf("1. Nhap vao chuoi\n");
		printf("2. In ra chuoi\n");
		printf("3. Dem so luong chu cai trong chuoi\n");
		printf("4. Dem so luong chu so trong chuoi\n");
		printf("5. Dem so luong ky tu dac biet trong chuoi\n");
		printf("6. Thoat\n");
		printf("\n\tLua chon cua ban: ");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				temp=1; 
					addString(&string, &size);
				break;
			case 2:
				if(temp==0){
					printString(string, size);
				}else{
					printf("Mang chua co du lieu!! Chon 1 de nhap"); 
				}
				
				break;
			case 3:
				if(temp==0){
					countIndex(string, size, count);
				}else{
					printf("Mang chua co du lieu!! Chon 1 de nhap"); 
				}
				break;
			case 4:
				if(temp==0){
					countNum(string, size, count2);
				}else{
					printf("Mang chua co du lieu!! Chon 1 de nhap"); 
				}
				break;
			case 5:
				if(temp==0){
					countSpecialIndex(string, size);
				}else{
					printf("Mang chua co du lieu!! Chon 1 de nhap"); 
				}
				break;
			case 6:
				exit(0);
				break;
			default:
				printf("Moi chon 1 -> 6"); 
		}
		
	}while(1);
	return 0;
}


int  addString(char *string, int *size){
	fflush(stdin); 
	printf("Moi nhap vao 1 chuoi: ");
	fgets(string, 100, stdin);
	*size = strlen(string);
	return 0; 
}

int  printString(char *string, int size){
	printf("Chuoi vua nhap la: %s", string);
	return 0;
	 
}

int countIndex( char *string, int size, int count){
	count = 0;
	for(int i=0; i<size; i++){
		if ('a'<=string[i] && string[i]<='z' ||'A'<=string[i] && string[i]<='Z' && string[i]!=' '){
			count++;
		}
	}
	printf("So ky tu la chu cai: %d",count);
}

int countNum(char *string, int size, int count2){
	count2 = 0;
	for(int i=0; i<size; i++){
		if ('0'<=string[i] && string[i]<='9' && string[i]!=' '){
			count2++;
		}
	}
	printf("So ky tu la chu so: %d",count2);
	
}

int countSpecialIndex(char *string, int size){
	int countA=0, count0=0, countSI=0; 
	for(int i=0; i<size; i++){
		if ('a'<=string[i] && string[i]<='z' ||'A'<=string[i] && string[i]<='Z' ){
			countA++;
		}
	}
	
	for(int i=0; i<size; i++){
		if ('0'<=string[i] && string[i]<='9'){
			count0++;
		}
	}
	for(int i=0; i<size; i++){
		if (string[i]=='\0' || string[i]==' '){
			countSI++;
		}
	}
	printf("So ky tu dac biet la: %d", size - 1 - countA - count0 - countSI); 
}



