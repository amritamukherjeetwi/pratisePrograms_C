#include<stdio.h>

int main()
{
int a[10];
int i,j;
for(i=0;i<=10;i++)
{
a[i]=i+2;
}
for(j=0;j<10;j++)
{
printf("values[ %d] of a=%d\n",j,a[j]);

}

return 0;
}
