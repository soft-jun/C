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

	printf("\n �ᰡ ��:1��\n ��� ��:2��\n �� ��:  3��\n\n �ڰ��� ���� : 4��\n\n\n ������� �����!\n\n ���Է����ּ��� : ");
	while (1) {
			
			  
		scanf("%d", &user); 
		printf("\n"); 
		
		computer = rand() % 3 + 1; 
	

		if (user == 4) { 
			printf("\n\n ���̱� Ƚ�� : %d\n ���� Ƚ�� : %d\n ����� Ƚ�� : %d", wincount, losecount, samecount);
			printf("\n\n=======================================================================================================================�����Ḧ ");
			return 0;
		}

		

		if (computer == 1) { 
			if (user == 1) {
				printf(" �ߴ���� (����) ���� ��ǻ�ʹ� (����)���� :    (������)  [�����ϴ�]...\n");
				samecount++;
			} else if (user == 2) {
				printf(" �ߴ���� (����) ���� ��ǻ�ʹ� (����)���� :   (*������)  [�̰���ϴ�]~!\n");
				wincount++;
			} else if (user == 3) {
				printf(" �ߴ���� (��) ���� ��ǻ�ʹ� (����)���� :   ��(�����;)  [�����ϴ�]...\n");
				losecount++;
			} 
		} else if (computer == 2) { 
			if (user == 1) {
				printf(" �ߴ���� (����) ���� ��ǻ�ʹ� (����)���� :   ��(�����;)  [�����ϴ�]...\n");
				losecount++;
			} else if (user == 2) {
				printf(" �ߴ���� (����) ���� ��ǻ�ʹ� (����)���� :    (������)  [�����ϴ�]...\n");
				samecount++;
			} else if (user == 3) {
				printf(" �ߴ���� (��) ���� ��ǻ�ʹ� (����)���� :   (*������)  [�̰���ϴ�]~!\n");
				wincount++;
			}
		} else if (computer == 3) { 
			if (user == 1) {
				printf(" �ߴ���� (����) ���� ��ǻ�ʹ� (��) ���� :   (*������)  [�̰���ϴ�]~!\n");
				wincount++;
			} else if (user == 2) {
				printf(" �ߴ���� (��)�� ���� ��ǻ�ʹ� (��) ���� :   ��(�����;)  [�����ϴ�]...\n");
				losecount++;
			} else if (user == 3) {
				printf(" �ߴ���� (��) ���� ��ǻ�ʹ� (��) ���� :    (������)  [�����ϴ�]...\n");
				samecount++;
			}
		} printf("\n ���Է����ּ��� : ");
	}
}
