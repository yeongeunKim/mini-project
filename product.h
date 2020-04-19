#include <stdio.h>
#include <string.h>

typedef struct{
    char name[50];//제품명
    int weight;//중량
    int price;//가격
    int standard;//표준가격
    int star;//별점수
} Product;

int addProduct(Product *s);//상품 추가하는 함수
void readProduct(Product s);//상품 출력 함수
int updateProduct(Product *s);// 상품 추가 함수 
int deleteProduct(Product *s);//상품 삭제 함수
