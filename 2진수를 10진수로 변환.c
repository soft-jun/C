#include <stdio.h>
int main(void){
	int inputBinary, outputDecimal = 0, weight =1;
	printf("\n 2진수를 10진수로 변환 \n\n");
	printf("2진수 입력 : ");
	scanf("\n %d", &inputBinary);
	
	while(inputBinary > 0){
		if(inputBinary % 10 != 0){
			outputDecimal = outputDecimal + weight; }
		inputBinary = inputBinary / 10;
		weight = weight * 2;
	}
	printf("\n 입력하신 2진수는 \n 10진수 %d입니다.", outputDecimal);
	return 0;
}
