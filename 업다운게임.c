#include<stdio.h>
void main(){
	srand(time(0));
	int randNum = (rand() % 100) + 1;
	
	printf("*���ٿ� ���� !! \n");
	printf("*1���� 100������ ���ڸ� \n 10�� �ȿ� ���߱�\n");
	int guessNum, chance = 10;
	
	do {
		printf("\n\n���ڸ� �Է����ּ���.\n");
		scanf("%d", &guessNum);
		chance--;
		
		if(randNum == guessNum) {
			printf("%d �� ���� ����!!", 10-chance);
			break;  }
		if(chance == 0) {
			printf("10���� ��ȸ�� ��� ����ϼ̽��ϴ�.\n �̼ǽ���!!");
			break;  }
		(randNum > guessNum) ? printf("Up\n") : printf("Down\n");
		printf("%d ���� ��ȸ�� ���ҽ��ϴ�.", chance);
	}while(1);
}
