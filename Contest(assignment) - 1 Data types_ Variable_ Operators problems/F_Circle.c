#include<stdio.h>
#include<math.h>
int main()
{
    double pi = acos(-1);
  double r ;
  scanf("%lf",&r);

  double A =pi *r * r;

  double C = 2*pi*r ;

  printf("%0.6lf %0.6lf\n",A,C);

return 0;
}