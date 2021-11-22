#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int com;
int me;
int res;

void input()
{
   scanf("%d",&me);
}

void process()
{
   if((me == 0 && com == 1) || (me == 1 && com == 2) || (me == 2 && com == 0))
      res = 1;
   else if (me == com)
      res = 0;
   else 
      res = -1;
}

void output()
{
   if (res > 0)
      printf("½Â¸®");
   else if (res < 0)
      printf("ÆÐ¹è");
   else 
      printf("¹«½ÂºÎ");
}

main()
{
