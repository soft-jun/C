#include <stdio.h>

int main(void){
}
    int num = 0;
	
	while (num < 2 || num > 8) {
		printf("������ �Է��Ͻÿ�: ");
		if (scanf_s("%d", &num) == 0) {
			printf("���ڸ� �Է��ؾ� �մϴ�!\n");
			rewind(stdin);
	    } else {
	    	if (num < 2 num > 8) {
	    		printf("������ �ٽ� �Է��ϼ���!\n");
			}
		}
	} 
	
	printf("���������� �Է��߽��ϴ�. ���α׷��� �����մϴ�.\n");
	return 0;
