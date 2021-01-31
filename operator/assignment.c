#include<stdio.h>
int num1=10,num2=3,c;

int sum(int a1, int b1)
{
 int a;
 int b = 0;
 static int sum;
 static int diff = 0;
 printf("addreddes of a, b, sum, diff: %x\t, %x\t, %x\t,%x\t",&a,&b,&sum,&diff);
 a = a1; b = b1; 
sum = a+b;
 diff=a-b;
return sum;
}

int main(void)
{
c = sum(num1,num2);
c = sum((num1-num2),num2);
c = sum((num1+num2),num2);
printf("Addition: %d\n",c);
printf("memory of sum1, sum2, c: %x, %x, %x\n",&num1, &num2, &c);
return 0;
}
