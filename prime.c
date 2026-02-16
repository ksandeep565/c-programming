
#include<stdio.h>
int main()
{
	int n,i,isprime=1;
	printf(" enter a number :");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n %i==0)
		{
			isprime=0;
			break;
		}
	}
	if(isprime&&n>1)
	{
		printf("%d is prime number\n",n);
	}else{
		printf("%d is not a prime number\n",n);
	}
	return 0;
}
