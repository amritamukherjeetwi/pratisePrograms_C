#include<stdio.h>
int main()
{
int a,b,add,sub,product,mod,incre,decre;
float div;
a=100;
b=21;
add=a+b;
sub=a-b;
product=a*b;
div=a/b;
mod=a%b;
incre=++a,
decre=--b;
printf("Addition of a and b: %d\n",add);
printf("Subtraction of a and b: %d\n",sub);
printf("Product of a and b: %d\n",product);
printf("Division of a and b: %f\n",div);
printf("Modulo of a and b: %d\n",mod);
printf("Increased value of a: %d\n",incre);
printf("Decresed value of b: %d\n",decre);

return 0;

}
