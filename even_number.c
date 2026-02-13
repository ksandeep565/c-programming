#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:\n");
	scanf("%d",&a);
	int res=(a%2==0);
	printf("the %d is an even number is %d",a,res);
	return 0;
}
