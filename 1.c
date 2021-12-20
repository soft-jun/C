#include <stdio.h>
void main(){
	int n;
	int sum = 0;
	
	printf("\n");
	printf("1부터 100까지 모든 자연수를 더하는 프로그램입니다.\n");
	
	for(n=1; n<=100; n=n+1){
		sum = sum + n;
	}
	
	printf("\n");
	printf("1부터 100까지 합은 %d입니다.", sum);
}
