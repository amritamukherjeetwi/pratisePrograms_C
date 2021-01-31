#include <stdio.h>
#include <string.h>
int main ()
 {
 char str1[10] = {'A','m','r','i','t','a','\0'};
 char str2[10] = "World";
 char str3[20];
 int  len ;
 // copy str1 into str3 
 strcpy(str3, str1);
 printf("strcpy( str3, str1) :  %s\n", str3 );
 // concatenates str1 and str2
 strcat( str1, str2);
 printf("strcat( str1, str2):   %s\n", str1 );
 // Lenghth of str1 after concatenation
 len = strlen(str1);
 printf("strlen(str1) :  %d\n", len );
 return 0;
}
