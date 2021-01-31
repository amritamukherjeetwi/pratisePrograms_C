#include <stdio.h>
int main()
{
 int a[2][2], b[2][2], add[2][2];
 //declaration of 1st array
printf("Elements of first matrix : \n");
 for (int i = 0; i < 2; i++)
 for (int j = 0; j < 2; j++)
 {
 scanf("%d", &a[i][j]);
 }
//declaration of 2nd array
printf("Elements of second matrix : \n");
 for (int i = 0; i < 2; i++)
 for (int j = 0; j < 2; j++)
 {
 scanf("%d", &b[i][j]);
 }
 for (int i = 0; i < 2; i++) 
{
for (int j = 0; j < 2; j++)
 {
 add[i][j] = a[i][j] + b[i][j];
 printf("\nSum Of Matrix:");
 printf("%.d\n", add[i][j]);
}
 printf("\n");
 }
 return 0;
}
