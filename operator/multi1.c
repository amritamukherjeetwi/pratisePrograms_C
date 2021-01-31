#include<stdio.h>
int main()
{
int i,j,a[10][10],b[10][10],c[10][10];
printf("Enter the elements of a matrix: ");
for(i=1;i<=2;i++)
{
for(j=1;j<=2;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("Enter the elements of b matrix: ");
for(i=1;i<=2;i++)
{
for(j=1;j<=2;j++)
{
scanf("%d",&b[i][j]);
}
}
//Printing matrix a
printf("Matrix a is as follows:\n");
for(i=1;i<=2;i++)
{
for(j=1;j<=2;j++)
{
printf("%d\t",a[i][j]);
}
}
printf("\n");
//Printing matrix b
printf("Matrix b is as follows:\n");
for(i=1;i<=2;i++)
{
for(j=1;j<=2;j++)
{
printf("%d\t",b[i][j]);
}
}
printf("\n");
//Calculating subtraction of 2 matrices:
printf("Matrix c is differences of these 2 matrices as follows:\n");
for(i=1;i<=2;i++)
{
for(j=1;j<=2;j++)
{
c[i][j]=a[i][j]-b[i][j];
printf("%d\t",c[i][j]);
}
}
return 0;
}
