#include <stdio.h>

int main(void)
{
	int i;
	int arr[3];
	int max = -9999, min = 9999; 
	
	printf("3���� ���� �Է�(a b c) :");
	 
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
	
	printf("�ִ밪 : %d\n", max);
	printf("�ּҰ� : %d\n", min);	  
    return 0;
}
