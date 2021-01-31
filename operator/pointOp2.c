#include <stdio.h>
int main()
{
 int m =15, n = 100, sum, *p1, *p2;
 p1 = &m;             //store the address of m in p1
 p2 = &n;             //store the address of p2
 printf("Address in p1 = %d\n", p1);
 printf("Address in p2 = %d\n", p2);
 sum = *p1+*p2;
 printf("*p1+*p2 = %d\n", sum);
 p1++;
 printf("p1++ = %d\n", p1); //increment pointer
 p2--;
 printf("p2-- = %d\n", p2); //decrement pointer
 return 0;
}
