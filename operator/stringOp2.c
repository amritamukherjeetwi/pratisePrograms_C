#include <stdio.h>
#include <string.h>
int main () 
{
 char name[10] = {'A','m','r','i','t','a','\0'};
 char title[10] = "Mukherjee";
 char total[20];
 int  length ;
 //copy name into total 
 strcpy(total, name);
 printf("strcpy( total, name) :  %s\n", total );
 //concatenates name and title 
 strcat( name, title);
 printf("strcat( name, title):   %s\n",name );
 // total lenghth of name after concatenation 
 length = strlen(name);
 printf("strlen(name) :  %d\n", length );
 return 0;
}
