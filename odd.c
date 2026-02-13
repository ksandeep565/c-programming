#include<stdio.h>
int main()
{
	int a;
	printf("enter the number:\n");
	scanf("%d",&a);
	int res=(a%2!=0);
	printf("the %d is an odd number is %d",a,res);
	return 0;
}
