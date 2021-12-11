#include <stdio.h>

int main(void)
{
	int i;
	int arr[3];
	int max = -9999, min = 9999; 
	
	printf("3개의 정수 입력(a b c) :");
	 
	for(i=0; i<3; i++)
	      scanf(" %d", &arr[i]);
	      
	for(i=0; i<3; i++)
	{
		  if(max<=arr[i]) {
		  	   max=arr[i];
		  }
		  if(min>=arr[i]){
		  	   min = arr[i];
		  }
	}      
	
	printf("최대값 : %d\n", max);
	printf("최소값 : %d\n", min);	  
    return 0;
}
