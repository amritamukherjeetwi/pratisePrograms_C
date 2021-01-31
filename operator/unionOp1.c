#include<stdio.h>
#include<string.h>
union dimension
{
char name[20];
int length,breadth;
float height;
};
int main()
{
union dimension fig1;
strcpy(fig1.name,"Triangle");
printf("Fig1 name:%s\n",fig1.name);
fig1.length=4;
printf("Fig1 length:%d\n",fig1.length);

fig1.breadth=3;
printf("Fig1 breadth:%d\n",fig1.breadth);

fig1.height=2.7;
printf("Fig1 height:%f\n",fig1.height);

strcpy(fig1.name,"Triangle");
fig1.length=4;
fig1.breadth=3;
fig1.height=2.7;

printf("Fig1 name:%s\n",fig1.name);
printf("Fig1 length:%d\n",fig1.length);
printf("Fig1 breadth:%d\n",fig1.breadth);
printf("Fig1 height:%f\n",fig1.height);
return 0;
}
