#include<stdio.h>
int main()
{
char c;
printf("\n Enter the character:");
scanf("%c",&c);
if((c>='a'&&c<='z')||c>='A'&&c<='Z'))
printf("%c is an alphabat",c);
else
printf("%c is not an alphabat",c);
return(0);
}
