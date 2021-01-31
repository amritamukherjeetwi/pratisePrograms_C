#include<stdio.h>
int fun()
{
static int a=10;
a++;

return a;

}
int main()
{

printf("Outside the function value of a is : %d",fun());
printf("Outside the function value of a is: %d",fun());
return 0;


}
