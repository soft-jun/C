#include<stdio.h>
void main(){
	int inputDecimal, temp, length=0, i;
	printf("\n 10������ 2������ ��ȯ\n 10���� �Է� : \n");
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
	
	printf("\n �Է��Ͻ� 10������ 2������ ��ȯ�� ����Դϴ�.\n");
	for (i = 0; i <= length-1; i++) {
		printf(" %d", outputBinary[i]);
	}
}
