#include<stdio.h>
#include<math.h>
void main()
{
	float u,t,a,s;
	printf("Give us the values of u,t and a");
	scanf("%f%f%f",&u,&t,&a);
	s=u*t+(0.5)*a*t*t;
	printf("The distance is =%f",s);
}

