#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
	FILE *fptr;
	fptr =fopen("minhthang.txt","r");
	if(fptr == NULL){
		printf("khong ton tai file !");
		return 1;
	}
	char shope[200];
	if(fgets(shope,sizeof(shope),fptr)!=NULL){
		printf("dong dau tien cua minhthang.txt",shope);
	}else{
		printf("khong thay file");
	}
	fclose(fptr);
	printf("fiel thah cong");
    return 0;
}

