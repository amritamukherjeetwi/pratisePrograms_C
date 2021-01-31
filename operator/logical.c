#include<stdio.h>
int main()
{
int a=4,b=5,c=6,k=9,l=5;
int d[10];
//if loop
if(a>b && a>c)
printf("a is greatest among all");
if(b>a || c>b)
printf("a is not greatest\n");
// bit wise & and or operator
printf("Bitwise and:%d\n,Bitwise or:%d\n,Bit wise and assignment:%d\n",a&b,a|b,a&=b);
//Shift operators
// right shift means divide by 2 and left shift means multiplied by 2
printf("right shift of b is %d\n,left shift of a is%d\n",b>>2,a<<1); // Here b divided twice and a multiplied once
//left and right shift AND assignment operator
printf("right shift and operator: %d\n,left shift and operator : %d\n",c>>=2,k<<4);
//sizeof() operator
printf("size of d is %d\n",sizeof(d)); //Here int=4 and array size is 10 so total size is 10*4
//ternary operator
int m;
m=k>l?k:l;
printf("Greater between k and l is: %d\n",m);
return 0;
}
