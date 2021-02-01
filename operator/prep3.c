#include <stdio.h>
#define tokenpaste(p)\
printf ("token" #p " = %d", token##p)   //use of continuation(\) and stringize operator(#)
int main()
{
int token1 = 4;
tokenpaste(1);
return 0;
}
