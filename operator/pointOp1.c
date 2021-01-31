#include <stdio.h>
int main()
{
 int *x,* y, a=2,b=5,t;
 printf("Before Swapping\na = %d\nb = %d\n", a, b);
 printf("Swaping of two numbers using pointer:");
 x = &a;
 y = &b;
 t = *x;
 *x = *y;
 *y = t;
 printf("After Swapping\na = %d\nb = %d\n", a, b);
 return 0;
}
