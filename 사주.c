#include <stdio.h>
main()
{
	int year, month, day, res;
	printf("����� ���ָ� ���帳�ϴ�.\n����, ��, ���� ���ʴ�� �Է��ϼ��� : ");
    scanf("%d %d %d", &year, &month, &day);
	res =  year - month + day;
	if(res % 10 ==0)
	  printf("����� ���ִ� ����Դϴ�.\n");
	 else
	  printf("����� ���ִ� �׷������Դϴ�.\n");
}
