#include "manager.h"

int selectMenu(){
	int menu;
	printf("1. 메뉴 조회\n");
	printf("2. 메뉴 추가\n");
	printf("3. 메뉴 수정\n");
	printf("4. 메뉴 삭제\n");
	printf("0. 종료\n");
	printf("=> 원하는 메뉴는? ");
	scanf("%d",&menu);

	return menu;
}
int main(){
#ifdef DEBUG
	printf("Debug : %s %s %s %d\n",__DATE__,__TIME__,__FILE__,__LINE__);
#endif
	Product s[100];
	int count =0, menu;
	int curcount=0;

	while(1){
		menu = selectMenu();
		if(menu==0) break;
		if(menu==1){
			if(count>0) listProduct(s,curcount);
			else printf("데이터가 없습니다!\n");
			}
		else if(menu==2){
			count += addProduct(&s[curcount++]);
		}
		else if(menu==3) {
			int no =selectProductNo(s,curcount);
			if(no==0) {
				printf("=>취소됨!\n");
				continue;
				 }
			updateProduct(&s[no-1]);
			}
		else if(menu==4){
			int no = selectProductNo(s,curcount);
			if(no==0) {
				printf("=>취소됨!\n");
				continue;
				}
			int delete;
			printf("정말로 삭제 하시겠습니까?(삭제 : 1)");
			scanf("%d",&delete);
			if(delete==1)
				 if(deleteProduct(&s[no-1])) count--;
			}
}		
		printf("종료됨!\n");
		return 0;

}
