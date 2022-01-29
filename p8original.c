#include<stdio.h>
#include<math.h>
float input()
{
  float n;
  printf("enter the value of n\n");
  scanf("%f",&n);
  return n;
}
float mysqrt(float n)
{ float sqrt_result;
  sqrt_result = sqrt(n);
  return sqrt_result;
}
void output(float n, float sqrt_result)
{
  printf("square root of a %f is=\t %f",n, sqrt_result);

}
int main()
{float n, sqrt_result;
n= input();
sqrt_result= mysqrt(n);
output(n,sqrt_result);
return 0;
}
