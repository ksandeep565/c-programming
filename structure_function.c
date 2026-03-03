#include<stdio.h>
struct student
{
	int id;
	float marks;
	char name[20];
};
int main()
{
	struct student s1={121,99,"sandeep"};
	printf("\n student details:");
	printf("\n_____________________");
	printf("\n1)id=%d",s1.id);
	printf("\n2)marks=%.2f",s1.marks);
	printf("\n3)name=%s",s1.name);
	return 0;
}
