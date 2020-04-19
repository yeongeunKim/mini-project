#include "product.h"

int addProduct(Product *s){
	printf("제품 명은?");
	getchar();
	scanf("%[^\n]s",s->name);
	printf("중량은?");
	scanf("%d",&s->weight);
	printf("가격은?");
	scanf("%d",&s->price);
	printf("표준 가격은?");
	scanf("%d",&s->standard);
	printf("별 점수는?");
	scanf("%d",&s->star);
	return 1;
}
void readProduct(Product s){
	printf("%s %dg\n",s.name,s.weight);
	printf("%d원\n",s.price);
	printf("(10g당 %d원)\n",s.standard);
	for(int i=0;i<s.star;i++) printf("*");
	printf("\n");	
}
int updateProduct(Product *s){
	printf("새제품 명은?");
	getchar();
	scanf("%[^\n]s",s->name);
	printf("새중량은?");
	scanf("%d",&s->weight);
	printf("새가격은?");
	scanf("%d",&s->price);
	printf("새표준 가격은?");
	scanf("%d",&s->standard);
	printf("새로운 별 점수는?");
	scanf("%d",&s->star);
	printf("=>수정성공!!\n");
	return 1;
}	
int deleteProduct(Product *s){
	s->price =-1;
	s->weight = -1;
	s->standard = -1;
	s->star = -1;
	printf("삭제됨!\n");
	return 1;
}

