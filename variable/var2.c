#include<stdio.h>
int fun()
{
static int a=1;
a++;
printf("inside : %d\t, loc : %x\t, sizeof: %d\n",a,&a,sizeof(a));
return a;
}
int main()
{
printf("%d",fun());
printf("%d",fun());

return 0;
}

