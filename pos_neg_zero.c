#include<stdio.h>
void main()
{
	int no;
	printf("Give a number");
	scanf("%d",&no);
	if(no>0)
	printf("The number %d is POSITIVE",no);
	if(no<0)
	printf("The number %d is NEGATIVE",no);
	if(no==0)
	printf("The number %d is ZERO",no);
}
