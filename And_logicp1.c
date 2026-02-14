#include<stdio.h>
int main()
{
	int a,b,c;
	printf(" Enter the  value in A=");
	scanf("\n%d",&a);
	printf(" Enter the  value in B=");
	scanf("\n%d",&b);
	printf(" Enter the  value in C=");
	scanf("\n%d",&c);
 if(a==2 && b==2 && c==2)
 {
 	printf("10");
 }
  else if(a==b && b==c && c==a)
  {
  	printf("5");
  }
  else if("b!=a && a!=c")
  {
  	printf("1");
  }
else
{
	printf("0");
}
return 0;
}
