#include <stdio.h>
void main(){
	int num, i, sum=0;
	
	printf("�������� ���� DREAM\n\n");
	printf("���� : 6�� ����� 1,2,3,6���� \n");
	printf("�ڱ� �ڽ��� ������ ����� ���� \n");
	printf("�ڱ� �ڽŰ� �����Ƿ� �������Դϴ�.\n");
	printf("6, 28, 496, 8128�� �������Դϴ�.\n");
	
	printf("���������� �Ǻ��ϰ� ���� ���� �Է� : ");
	scanf("\n %d", &num);
	
	for(i=1; i<num; i++) {
		if((num % i) == 0){
			sum = sum + i;
			printf("%d\t ", i);
		}
	}
	printf("\n %d�� ����� ��� ���ϸ� %d�Դϴ�.\n", num, sum);
	if(sum == num){   printf("\n\n%d�� �������Դϴ�.\n", num);  }
	else printf("\n\n%d�� �������� �ƴմϴ�.\n", num);
} 
