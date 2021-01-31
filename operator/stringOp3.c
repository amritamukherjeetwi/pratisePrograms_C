#include<stdio.h>
#include<string.h>
int main()
{
 char strg1[50], strg2[50];
 printf("Enter first string: ");
 scanf("%s",&strg1);
 printf("Enter second string: ");
 scanf("%s",&strg2);
int a;
a=strcmp(strg1, strg2);
 if(a==0)
 {
 printf("\nYou entered the same string two times");
 }
 else
 {
 printf("\nEntered strings are not same!");
 }
 return 0;
}
