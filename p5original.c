#include<stdio.h>

int input()
{
  int num;
  printf("enter the number\n");
  scanf("%d",&num);
  return num;

}
int cmp(int a, int b, int c)
{
  int lar= a;
    if(b>lar)
   lar=b;
   if(c>lar)
   lar=c;
}
void output(int a, int b, int c,int max)
{
 printf("largest among the %d, %d and %d is=%d\n",a,b, c,max);
}
int main()
{
  int a,b,c, max;
  a = input();
  b = input();
  c = input();
 max=cmp(a, b, c);
output(a, b, c, max);
return 0;
}