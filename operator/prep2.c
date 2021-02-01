#include <stdio.h>
#define  testing_for_pre_processor_operator(x, y)  \
printf(#x " and " #y " : Successfully!\n");
int main()
{
testing_for_pre_processor_operator(Compile,run);
return 0;
}
