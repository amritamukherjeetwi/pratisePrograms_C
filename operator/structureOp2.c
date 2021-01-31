
#include<stdio.h>
#include<string.h>
struct dimension
{
char name[20];
int length,breadth;
float height;
};
void dim(struct dimension fig); //Globally declare a function
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
dim(fig1);  //Printing the details of fig1
dim(fig2);  //Printing the details of fig2
dim(fig3);  //Printing the details of fig3
return 0;
}
void dim(struct dimension fig)
{
printf("Fig name: %s\n",fig.name); 
printf("Fig length: %d\n",fig.length);
printf("Fig breadth: %d\n",fig.breadth);
printf("Fig height: %f\n",fig.height);

}

