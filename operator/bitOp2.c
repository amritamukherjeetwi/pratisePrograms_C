#include <stdio.h>
#include <string.h>
struct
{
unsigned int roll : 3;
} person;
int main( )
 {
 person.roll = 8;
 printf( "  person.roll : %d\n",  person.roll );
 person.roll = 5;
 printf( " person.roll : %d\n",  person.roll );
 person.roll = 9;
 printf( " person.roll : %d\n",  person.roll);
 return 0;
}
