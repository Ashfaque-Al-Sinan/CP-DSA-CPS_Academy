#include<stdio.h>
int main()
{
  int rainy , cloudy ;
  scanf("%d %d",&rainy,&cloudy);
  int clear = 7 - rainy - cloudy ;

  printf("%d",clear);  

 return 0;
}