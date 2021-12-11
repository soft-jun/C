#include <stdio.h>

int main()
{
	int num;
	
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);
	
	printf("입력한 수를 거꾸로 출력 : ");
	do {
		printf("%d", num % 10);
		num = num / 10;
	} while (num);
	
	printf("\n");
	return 0;		
	
 } 
