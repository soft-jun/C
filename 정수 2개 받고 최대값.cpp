#include <stdio.h>

int main()
{
	int num[2]
	int i, max = 0;
	
	
	for(i=0; i<2; i++) {
		printf("���ڸ� �Է��ϼ��� : ");
		scanf("%d", & num[i]); 
	}
	
	max = num[0];
	
	for (i=1; i<5; i++) {
		
		    if(max < num[i])
		       max = num[i];
	}
	
	printf("���� ū ���� : %d", max);
	
	return 0;
}
