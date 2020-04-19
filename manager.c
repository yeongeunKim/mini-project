#include "manager.h"

void saveData(Product *s,int count){
	FILE *fp;
	fp = fopen("product.txt","wt");
	for(int i=0;i<count;i++){
		if(s[i].price != -1) fprintf(fp,"%[^\n]s,%d ,%d ,%d,%c",s[i].name,s[i].weight,s[i].price,s[i].standard,s[i].star);
	}
	fclose(fp);
	printf("=> 저장됨!"); 
}

void listProduct(Product *s,int count){
	printf("********************\n");
	for(int i=0; i<count; i++){
		if(s[i].weight == -1) continue;
		printf("%d.  ",i+1);
		readProduct(s[i]);
		}
	printf("\n");
	}	

int selectProductNo(Product *s,int count){
	int no;
	listProduct(s,count);
	printf("번호는 ? (취소 : 0)");
	scanf("%d",&no);
	return no;
	}

	
