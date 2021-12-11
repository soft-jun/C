#include <stdio.h>

int main()
{
	int num[2]
	int i, max = 0;
	
	
	for(i=0; i<2; i++) {
		printf("숫자를 입력하세요 : ");
		scanf("%d", & num[i]); 
	}
	
	max = num[0];
	
	for (i=1; i<5; i++) {
		
		    if(max < num[i])
		       max = num[i];
	}
	
	printf("가장 큰 수는 : %d", max);
	
	return 0;
}
