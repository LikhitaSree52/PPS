#include<stdio.h>
struct student
{
	int rno,marks,age;
	char name[20]
};
void main()
{
	struct student st1,st2,st3;
	printf("\n Enter the name of the first student");
	gets(st1.name);
		printf("\n Enter the roll no,age and marks of student");
	scanf("%d%d%d",&st1.rno,&st1.age,&st1.marks);
	printf("\n");
	puts(st1.name);
		printf("\nRoll no:%d Age:%d Marks:%d",st1.rno,st1.age,st1.marks);
	printf("\n Enter the Second name of the second student");
        scanf("%s",&st2.name);
                printf("\n Enter the roll no,age and marks of student");
        scanf("%d%d%d",&st2.rno,&st2.age,&st2.marks);
        printf("\n");
        puts(st2.name);
                printf("\nRoll no:%d Age:%d Marks:%d",st2.rno,st2.age,st2.marks);
	printf("\n Enter the First name of the third student");
        scanf("%s",&st3.name);
                printf("\n Enter the roll no,age and marks of student");
        scanf("%d%d%d",&st3.rno,&st3.age,&st3.marks);
        printf("\n");
        puts(st3.name);
                printf("\nRoll no:%d Age:%d Marks:%d",st3.rno,st3.age,st3.marks);
} 
	 
