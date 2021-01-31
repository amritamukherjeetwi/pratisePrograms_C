//for loop
#include<stdio.h>
int main()
{
int i,age,run,k=5;
for(i=1;i<=10;i++)
printf("Table of 5 %d\t",5*i);

//if else loop
printf("Enter your age");
scanf("%d",&age);
if(age>18)
printf("Eligible for vote");
else
printf("Not eligible for vote");

//while loop
printf("Enter the run");
scanf("%d",&run);
while(run<=5)
{
printf("%d\n",run);
run++;
}
//do- while loop
do
{
printf("%d\n",k);
k++;
}
while(k<=4);

return 0;
}
