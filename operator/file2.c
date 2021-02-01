#include <stdio.h>
#include <stdlib.h>
int main()
{
int number;
FILE *fptr;
if ((fptr = fopen("E:\\program.txt","r")) == NULL)
{
printf("Error! opening file");
exit(1);
}
fscanf(fptr,"%d", &number);
printf("Value of n=%d", number);
fclose(fptr);
return 0;
}
