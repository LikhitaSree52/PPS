#include<stdio.h>
void main()
{
	int no;
	printf("Enter the number");
        scanf("%d",&no);
        if((no%5==0) && (no%7==0))
	printf("The number %d is divisible by 5 and 7",no);
}	
