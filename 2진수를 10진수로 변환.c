#include <stdio.h>
int main(void){
	int inputBinary, outputDecimal = 0, weight =1;
	printf("\n 2������ 10������ ��ȯ \n\n");
	printf("2���� �Է� : ");
	scanf("\n %d", &inputBinary);
	
	while(inputBinary > 0){
		if(inputBinary % 10 != 0){
			outputDecimal = outputDecimal + weight; }
		inputBinary = inputBinary / 10;
		weight = weight * 2;
	}
	printf("\n �Է��Ͻ� 2������ \n 10���� %d�Դϴ�.", outputDecimal);
	return 0;
}
