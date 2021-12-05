#include <stdio.h>
void main(){
	int num, i, cnt=0;
	
	printf("\n 입력된 숫자가 소수인지 판별해 DREAM");
	printf("\n\n 숫자 입력 : ");
	scanf("%d", &num);
	
	printf("\n %d의 약수 : \t", num);
	for(i=1; i<=num; i=i+1){
		if((num % i) == 0){
			cnt = cnt +1;
			printf("%d\t ", i);
		}
	}
	printf("\n\n%d의 약수는 %d개입니다." ,num, cnt);
	if(cnt == 2){  printf("%d는 소수입니다.\n", num);  }
	else printf("\n \%d는 소수가 아닙니다.", num);
} 
