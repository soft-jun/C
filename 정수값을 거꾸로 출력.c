#include <stdio.h>

int main()
{
	int num;
	
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &num);
	
	printf("�Է��� ���� �Ųٷ� ��� : ");
	do {
		printf("%d", num % 10);
		num = num / 10;
	} while (num);
	
	printf("\n");
	return 0;		
	
 } 
