#include<stdio.h>
int main()
{
  long long a ,b ;
  scanf("%lld %lld",&a,&b);

  long long result  = (a+b-1)/b ;

  printf("%lld\n",result);

 return 0;
}