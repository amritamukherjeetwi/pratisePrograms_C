#include<stdio.h>
#include<string.h>
struct dimension
{
char name[20];
int length,breadth;
float height;
};
int main()
{
struct dimension fig1,fig2,fig3;
strcpy(fig1.name, "Triangle");  //Specification of fig1
fig1.length=4;
fig1.breadth=3;
fig1.height=2.7;
strcpy(fig2.name, "Square");  //Specification of fig2
fig2.length=5;
fig2.breadth=5;
fig2.height=5.9;
strcpy(fig3.name, "Rectangle"); //Specification of fig1
fig3.length=5;
fig3.breadth=9;
fig3.height=3.2;
printf("Fig1 name: %s\n",fig1.name);  //Printing the details of fig1
printf("Fig1 length: %d\n",fig1.length);
printf("Fig1 breadth: %d\n",fig1.breadth);
printf("Fig1 height: %f\n",fig1.height);
printf("Fig2 name: %s\n",fig2.name);  //Printing the details of fig1
printf("Fig2 length: %d\n",fig2.length);
printf("Fig2 breadth: %d\n",fig2.breadth);
printf("Fig2 height: %f\n",fig2.height);
printf("Fig3 name: %s\n",fig3.name);  //Printing the details of fig1
printf("Fig3 length: %d\n",fig3.length);
printf("Fig3 breadth: %d\n",fig3.breadth);
printf("Fig3 height: %f\n",fig3.height);
return 0;
}
