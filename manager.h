#include "product.h"

void listProduct(Product *s,int count);//전체 상품 리스트 출력 함수
int selectProductNo(Product *s,int count);//전체 상품 리스트 중 하나 선택하는 함수
void savdData(Product *s,int count);//파일 저장하는 함수
int loadData(Product s[]);// 파일 불러오는 함수
void searchName(Product *s,int count);//제품 명 검색기능 하는 함수
void searchPrice(Product *s, int count);//가격대 검색하는 함수
void searchStar(Product *s, int count);//변 점수 검색하는 함수

