#include <stdio.h>
#include <stdlib.h>
int main()
{
 int number;
 FILE *fptr;
 fptr = fopen("E:\\program.txt","w");
 if(fptr == NULL)
 {
 printf("Error!");
 exit(1);
 }
 printf("Enter number which will be stored in program.txt file: ");
 scanf("%d",&number);
 fprintf(fptr,"%d",number);
 fclose(fptr);
 return 0;
}
