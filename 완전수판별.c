#include <stdio.h>
void main(){
	int num, i, sum=0;
	
	printf("완전수를 구해 DREAM\n\n");
	printf("예시 : 6의 약수는 1,2,3,6으로 \n");
	printf("자기 자신을 제외한 약수의 합이 \n");
	printf("자기 자신과 같으므로 완전수입니다.\n");
	printf("6, 28, 496, 8128은 완전수입니다.\n");
	
	printf("완전수인지 판별하고 싶은 숫자 입력 : ");
	scanf("\n %d", &num);
	
	for(i=1; i<num; i++) {
		if((num % i) == 0){
			sum = sum + i;
			printf("%d\t ", i);
		}
	}
	printf("\n %d의 약수를 모두 더하면 %d입니다.\n", num, sum);
	if(sum == num){   printf("\n\n%d은 완전수입니다.\n", num);  }
	else printf("\n\n%d은 완전수가 아닙니다.\n", num);
} 
