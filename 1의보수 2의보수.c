#include <stdio.h>
void main(){
	int length, i, carry=1;
	char inputString[]={0,};
	printf("\n1의 보수와 2의 보수로 변환\n2진수 입력 : \n\n");
	scanf("%s", &inputString);
	length = strlen(inputString);
	
	int binary[length];
	for(i=0; i<=length-1; i++){
	   binary[i] = inputString[i]-48;   }
	   
	int onescomplement[length], twoscomplement[length];
	for(i=length-1; i>=0; i--){
		onescomplement[i] = 1 - binary[i]; }
	printf("\n1의 보수 출력\n");
	for(i=0; i<=length-1; i++){
	printf(" %d",onescomplement[i]);  }
	
	for(i=length-1; i>=0; i--){
		twoscomplement[i] = onescomplement[i] + carry;
		twoscomplement[i] = twoscomplement[i] % 2;
		carry = onescomplement[i] * carry;  }
	printf("\n2의 보수 출력\n");
	for(i=0; i<=length-1; i++){
	printf(" %d",twoscomplement[i]); }
}
