#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int result=a/b ;
  int rem= a%b ;
  double m = (double)a;
  double n =(double)b;
  double newRes= m/n ;
  printf("%d %d %0.5lf",result,rem,newRes);

  return 0;
}