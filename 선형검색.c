#include <stdio.h>

void main(){
	int howmany, *database, i, data, result = -1;
	printf("LinearSearch �����˻��� ���� ������ ���� �Է�: ");
	scanf("%d", &howmany); 
	database = calloc(howmany, sizeof(int));
	
	srand(time(NULL));
	for(i = 0; i < howmany; i++){
	   database[i] = (rand() % 10)+1;
	   printf("%d l ", database[i]);
    }
    
    printf("\n\nã�� ���� �Է��ϼ���: ");
    scanf("%d", &data);
    for(i=0; i<howmany; i++){
    	if (database[i] == data){
    		result = i;
    		break;}
    }
    
    if (result != -1)
       printf("\n\n%d(��)�� database�� %d ��° ���Դϴ�.\n", data, result+1);
    else
	   printf("\n\n�˻��� �����߽��ϴ�.");
    free(database);      
}
