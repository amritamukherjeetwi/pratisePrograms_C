#include<stdio.h>
int fun()
{
int a=45; //local variable
a=a++;
return a;

}
int main()

{

printf("value of a is: %d",fun());
printf("value of a is: %d",fun());
return 0;

}
