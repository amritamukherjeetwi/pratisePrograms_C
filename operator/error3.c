#include<stdio.h>
#include<stdlib.h>  //it contains exit()function..
int main()
{
int vajjo=45,vajok=0,vagfol;
if(vajok==0)
{
fprintf(stderr,"Division by zero is not possible as it produce infinite. \n");
exit(EXIT_FAILURE);
}
else
{
vagfol=vajjo/vajok;
fprintf(stderr,"Result of this division is as follows: %d\t",vagfol);
exit(EXIT_SUCCESS);
}

}

