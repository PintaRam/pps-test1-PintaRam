// add two numbers
#include<stdio.h>
int add();
int main()
{
  add();
  return 0;
}

int add()
{
int num1;
float num2, sum;
printf("enter the value of num1=");
scanf("%d",&num1);
printf("enter the value of num2=");
scanf("%f",&num2);
sum = num1 + num2;
printf("addition of %d+%f is=%f\n",num1,num2,sum);
return 0;
}
