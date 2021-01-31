
#include<stdio.h>
#include<string.h>
struct
{
unsigned int length:5;
}fig1;
int main()
{
fig1.length=4;
printf("Fig1 length:%s\n",fig1.length);
fig1.length=4;
printf("Fig1 length:%d\n",fig1.length);

fig1.length=3;
printf("Fig1 length:%d\n",fig1.length);

fig1.length=2;
printf("Fig1 length:%f\n",fig1.length);
return 0;
}

