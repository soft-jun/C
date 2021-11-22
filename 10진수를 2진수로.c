#include<stdio.h>
void main(){
	int inputDecimal, temp, length=0, i;
	printf("\n 10진수를 2진수로 변환\n 10진수 입력 : \n");
	scanf("%d", &inputDecimal);
	
	temp = inputDecimal;
	while(temp>0){
		temp = temp / 2;
		length++;
	} 
	
	int outputbinary[length];
	for(i=length-1; inputDecimal>0; i--){
		outputbinary[i] = inputDecimal % 2; 
		inputDecimal = inputDecimal/2;
	}
	
	printf("\n 입력하신 10진수를 2진수로 변환한 결과입니다.\n");
	for (i = 0; i <= length-1; i++) {
		printf(" %d", outputBinary[i]);
	}
}
