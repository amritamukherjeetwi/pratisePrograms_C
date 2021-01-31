#include<stdio.h>
int main()
 {
 char option;
 double a, b;
 printf("Enter an option (+, -, *, /): ");
 scanf("%c", &option);
 printf("Enter two numbers: ");
 scanf("%lf %lf",&a, &b);
 switch(option)
 {
  case '+':
 printf("%.1lf + %.1lf = %.1lf",a, b, a+b);
  break;
 case '-':
  printf("%.1lf - %.1lf = %.1lf",a, b, a-b);
  break;
 case '*':
  printf("%.1lf * %.1lf = %.1lf",a, b, a*b);
  break;
 case '/':
 printf("%.1lf / %.1lf = %.1lf",a, b, a/b);
 break;
 // operator doesn't match any case constant +, -, *, /
  default:
  printf("Error! option is not correct");
  }
 return 0;
}
