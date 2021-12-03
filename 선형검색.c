#include <stdio.h>

void main(){
	int howmany, *database, i, data, result = -1;
	printf("LinearSearch 선형검색을 위한 데이터 개수 입력: ");
	scanf("%d", &howmany); 
	database = calloc(howmany, sizeof(int));
	
	srand(time(NULL));
	for(i = 0; i < howmany; i++){
	   database[i] = (rand() % 10)+1;
	   printf("%d l ", database[i]);
    }
    
    printf("\n\n찾을 값을 입력하세요: ");
    scanf("%d", &data);
    for(i=0; i<howmany; i++){
    	if (database[i] == data){
    		result = i;
    		break;}
    }
    
    if (result != -1)
       printf("\n\n%d(은)는 database의 %d 번째 값입니다.\n", data, result+1);
    else
	   printf("\n\n검색에 실패했습니다.");
    free(database);      
}
