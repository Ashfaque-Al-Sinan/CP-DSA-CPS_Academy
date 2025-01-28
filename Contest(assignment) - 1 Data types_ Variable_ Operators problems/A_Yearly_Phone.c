#include<stdio.h>
int main()
{
  int x ;
  scanf("%d",&x);

  int last = x % 100 ;

  printf("K%02d",last);

 return 0;
}
