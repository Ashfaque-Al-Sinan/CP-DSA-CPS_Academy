#include<stdio.h>
int main()
{
  int r1 , r2 ;
  int d1 , d2 ;
  scanf("%d %d",&r1,&r2);
  scanf("%d %d",&d1,&d2);

  int result_1 = r1 + d1 ;
  int result_2 = r2 + d2 ;

  if(result_1>result_2){

    printf("Dominater\n");
  }

  else{

    printf("Everule\n");
  }
 return 0;
}