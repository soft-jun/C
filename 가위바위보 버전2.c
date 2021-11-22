#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 


int main() {
	int computer; 
	int user; 
	int wincount = 0; 
	int losecount = 0; 
	int samecount = 0;

    srand(time(NULL)); 

	printf("\n ■가 위:1번\n ■바 위:2번\n ■ 보:  3번\n\n ★게임 종료 : 4번\n\n\n ★행운을 빌어요!\n\n ○입력해주세요 : ");
	while (1) {
			
			  
		scanf("%d", &user); 
		printf("\n"); 
		
		computer = rand() % 3 + 1; 
	

		if (user == 4) { 
			printf("\n\n ★이긴 횟수 : %d\n ☆진 횟수 : %d\n ＃비긴 횟수 : %d", wincount, losecount, samecount);
			printf("\n\n=======================================================================================================================▶종료를 ");
			return 0;
		}

		

		if (computer == 1) { 
			if (user == 1) {
				printf(" ◆당신은 (가위) 선택 컴퓨터는 (가위)선택 :    (´～｀)  [비겼습니다]...\n");
				samecount++;
			} else if (user == 2) {
				printf(" ◆당신은 (바위) 선택 컴퓨터는 (가위)선택 :   (*´∀｀)  [이겼습니다]~!\n");
				wincount++;
			} else if (user == 3) {
				printf(" ◆당신은 (보) 선택 컴퓨터는 (가위)선택 :   Σ(￣□￣;)  [졌습니다]...\n");
				losecount++;
			} 
		} else if (computer == 2) { 
			if (user == 1) {
				printf(" ◆당신은 (가위) 선택 컴퓨터는 (바위)선택 :   Σ(￣□￣;)  [졌습니다]...\n");
				losecount++;
			} else if (user == 2) {
				printf(" ◆당신은 (바위) 선택 컴퓨터는 (바위)선택 :    (´～｀)  [비겼습니다]...\n");
				samecount++;
			} else if (user == 3) {
				printf(" ◆당신은 (보) 선택 컴퓨터는 (바위)선택 :   (*´∀｀)  [이겼습니다]~!\n");
				wincount++;
			}
		} else if (computer == 3) { 
			if (user == 1) {
				printf(" ◆당신은 (가위) 선택 컴퓨터는 (보) 선택 :   (*´∀｀)  [이겼습니다]~!\n");
				wincount++;
			} else if (user == 2) {
				printf(" ◆당신은 (바)위 선택 컴퓨터는 (보) 선택 :   Σ(￣□￣;)  [졌습니다]...\n");
				losecount++;
			} else if (user == 3) {
				printf(" ◆당신은 (보) 선택 컴퓨터는 (보) 선택 :    (´～｀)  [비겼습니다]...\n");
				samecount++;
			}
		} printf("\n ○입력해주세요 : ");
	}
}
