#include <stdio.h>
void main(){
	int num, i;
	int cnt = 0;
		
	printf("\n �Է¹��� ������ ��� ����� DREAM");
	printf("\n\n���� �Է� : ");
	scanf("%d", &num); 
	
	printf("\n%d�� ����� : \t", num);
	for(i=1; i<=num; i=i+1){
		if((num % i)== 0){
			printf(" %d\t ", i);
			cnt = cnt +1;
		}
	}
	printf("\n%d�� ����� %d���Դϴ�. \n" ,num, cnt);
}
