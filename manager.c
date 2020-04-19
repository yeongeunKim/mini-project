#include "manager.h"

void saveData(Product *s,int count){
	FILE *fp;
	fp = fopen("product.txt","wt");
	for(int i=0;i<count;i++){
		if(s[i].price != -1) fprintf(fp,"%s %d %d %d %d",s[i].name,s[i].weight,s[i].price,s[i].standard,s[i].star);
	}
	fclose(fp);
	printf("=> 저장됨!\n"); 
}
int loadData(Product s[]){
	int count = 0;
	FILE *fp;
	fp = fopen("product.txt","rt");
	if(fp==NULL){
		printf("=> 파일 없음!\n");
		return 0;	
		}
	for(; ;count++){
		fscanf(fp,"%[^\n]s %d %d %d %d",s[count].name,&s[count].weight,&s[count].price,&s[count].standard,&s[count].star);
		if(feof(fp)) break;
		}
	fclose(fp);
	printf("=> 로딩 성공!\n");
	return count;
}
void listProduct(Product *s,int count){
	printf("==============================\n");
	for(int i=0; i<count; i++){
		if(s[i].weight == -1) continue;
		printf("%d ",i+1);
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
void searchName(Product *s, int count){
	int scount = 0;
	char search[50];

	printf("검색할 제품명을 입력하시오. ");
	scanf("%s", search);
	printf("==============================\n");
	for(int i=0;i<count;i++){
		if(s[i].price !=-1){
			if(strstr(s[i].name,search)){
				printf("%d",i+1);
				readProduct(s[i]);
				scount++;				
			}		
		}			
	}
	if(scount ==0) printf("=>검색된 데이터가 없습니다.\n");
	printf("\n");	
}
void searchPrice(Product *s,int count){
	int pcount = 0;
	int search;
	printf("검색하고 싶은 가격대를 입력하시오. ");
	scanf("%d",&search);
	printf("==============================\n");
	for(int i=0;i<count;i++){
		if(s[i].price !=-1){
			if(search == s[i].price){
				printf("%2d", i+1);
				readProduct(s[i]);
				pcount++;
			}
		}		
	}	
	if(pcount ==0) printf("=> 검색 된 데이터가 없습니다.\n");
	printf("\n");
}
void searchStar(Product *s,int count){
	int tcount = 0;
	int search;
	printf("검색하고 싶은 별점수를 입력하시오. ");
	scanf("%d",&search);
	printf("==============================\n");
	for(int i=0; i<tcount;i++){
		if(s[i].price !=-1){
			if(search == s[i].star){
				printf("%2d",i+1);
				readProduct(s[i]);
				tcount++;	
			}
		}
	}
	if(tcount == 0) printf("=> 검색 된 데이터가 없습니다.\n");
	printf("\n");	
}	
