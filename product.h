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
void saveData(Product *s,int count); //리스트 파일에 저장하는 함수 
int loadData(Product *s);//파일에 저장된 리스트 불러오는 함수
int searchProduct(Product *s,int count);//상품 찾는 함수
