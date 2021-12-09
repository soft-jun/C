#include<stdio.h>
void main(){
	srand(time(0));
	int randNum = (rand() % 100) + 1;
	
	printf("*업다운 게임 !! \n");
	printf("*1부터 100까지의 숫자를 \n 10번 안에 맞추기\n");
	int guessNum, chance = 10;
	
	do {
		printf("\n\n숫자를 입력해주세요.\n");
		scanf("%d", &guessNum);
		chance--;
		
		if(randNum == guessNum) {
			printf("%d 번 만에 정답!!", 10-chance);
			break;  }
		if(chance == 0) {
			printf("10번의 기회를 모두 사용하셨습니다.\n 미션실패!!");
			break;  }
		(randNum > guessNum) ? printf("Up\n") : printf("Down\n");
		printf("%d 번의 기회가 남았습니다.", chance);
	}while(1);
}
