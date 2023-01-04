
#include<stdio.h>
void main()
{
	int no;
	printf("Enter a number to check even or odd");
	scanf("%d",&no);
	printf("The number is %s",no%2==0?"EVEN":"ODD");
}

