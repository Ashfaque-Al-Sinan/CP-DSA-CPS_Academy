#include<stdio.h>
int main()
{
  int l,w;
  scanf("%d%d",&l,&w);

  int A = l * w ;
  int P = 2*(l+w);
  
  printf("%d %d\n",A,P);

 return 0;
}