#include<stdio.h>
int main()
{
  int X,N ;
  scanf("%d %d",&X,&N);

  int remaining = X-N*10 ;
  int jalebis = remaining/20 ;

  printf("%d\n",jalebis);
  
 return 0;
}