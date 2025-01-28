#include<stdio.h>
int main()
{
  
  char a,b,c ;
  scanf("%c%c%c",&a,&b,&c);
  int abc = (a-'0')*100 + (b-'0')*10 + (c-'0')*1 ;
  int bca=  (b-'0')*100 + (c-'0')*10 + (a-'0')*1 ;
  int cab=  (c-'0')*100 + (a-'0')*10 + (b-'0')*1 ;

  printf("%d",abc+bca+cab);


 return 0;
}