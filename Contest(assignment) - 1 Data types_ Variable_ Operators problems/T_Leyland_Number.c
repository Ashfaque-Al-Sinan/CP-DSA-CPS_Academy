#include<stdio.h>
#include<math.h>
int main()
{
    int a,b ;
    scanf("%d %d",&a,&b);

    int power = pow(a,b)+pow(b,a);
    
    printf("%d",power);
  
 return 0;
}