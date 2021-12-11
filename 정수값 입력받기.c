#include <stdio.h>

int main(void){
}
    int num = 0;
	
	while (num < 2 || num > 8) {
		printf("정수를 입력하시오: ");
		if (scanf_s("%d", &num) == 0) {
			printf("숫자를 입력해야 합니다!\n");
			rewind(stdin);
	    } else {
	    	if (num < 2 num > 8) {
	    		printf("정수를 다시 입력하세요!\n");
			}
		}
	} 
	
	printf("정상적으로 입력했습니다. 프로그램을 종료합니다.\n");
	return 0;
