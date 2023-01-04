#include<stdio.h>
#include<math.h>
void main()
{
	float x1,x2,y1,y2,dist;
	printf("Co-ordinate points iyyu ra");
	scanf("%f%f%f%f",&x1,&x2,&y1,&y2);
	dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	printf("Distance kavalentra theesuko=%f",dist);
}	

