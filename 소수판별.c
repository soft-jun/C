#include <stdio.h>
void main(){
	int num, i, cnt=0;
	
	printf("\n �Էµ� ���ڰ� �Ҽ����� �Ǻ��� DREAM");
	printf("\n\n ���� �Է� : ");
	scanf("%d", &num);
	
	printf("\n %d�� ��� : \t", num);
	for(i=1; i<=num; i=i+1){
		if((num % i) == 0){
			cnt = cnt +1;
			printf("%d\t ", i);
		}
	}
	printf("\n\n%d�� ����� %d���Դϴ�." ,num, cnt);
	if(cnt == 2){  printf("%d�� �Ҽ��Դϴ�.\n", num);  }
	else printf("\n \%d�� �Ҽ��� �ƴմϴ�.", num);
} 
