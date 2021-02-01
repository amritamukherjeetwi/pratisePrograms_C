#include <stdio.h>
int main()
{
printf("File :%s\n", __FILE__ );  //Show current file name
printf("Date :%s\n", __DATE__ );  // show date
printf("Time :%s\n", __TIME__ );  //show time
printf("Line :%d\n", __LINE__ );  //show no. of line present here
printf("ANSI :%d\n", __STDC__ );  //Return 1 if compilor compile with ansi standard
}
