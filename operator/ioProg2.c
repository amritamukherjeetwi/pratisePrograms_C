#include<stdio.h>
#include <string.h>
int main()
{ 
char name[50];
printf("Enter your name: ");
fgets(name,10,stdin); //reads string from user
printf("Your name is: ");
puts(name);  //displays string
return 0;
}
