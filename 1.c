#include <stdio.h>
void main(){
	int n;
	int sum = 0;
	
	printf("\n");
	printf("1���� 100���� ��� �ڿ����� ���ϴ� ���α׷��Դϴ�.\n");
	
	for(n=1; n<=100; n=n+1){
		sum = sum + n;
	}
	
	printf("\n");
	printf("1���� 100���� ���� %d�Դϴ�.", sum);
}
