#include<stdio.h>
#include<string.h>
int main()
{
char s[10]="hello";
int start=0,end=0,i;
while(*s[10])
{
end++;
s++;
}
char rev[end+1];
for(i=0;i<=end;i++)
{
rev[i]=s[end-i];
}
rev[i]="\0";
printf("%s",rev[i]);
return 0;
}
