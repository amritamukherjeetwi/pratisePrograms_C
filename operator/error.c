#include<stdio.h>
#include<string.h>
#include<errno.h>
extern int errno;
int main()
{
FILE *filepointer;
int error;
filepointer=fopen("Error_test.txt","rb");
if (filepointer==NULL)
{
error=errno;
fprintf(stderr,"Value of error: %d\n",errno);
perror("Print if there is error: ");
fprintf(stderr,"Print error if there is problem in opening file: %s\n",strerror(error));
}
else
{
fclose(filepointer);
}
return 0;
}


