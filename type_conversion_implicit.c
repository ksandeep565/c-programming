/* Type conversion in c-language
 1)implicit type conversion ,it's autometically done by  compiler.when converting
 a small data type to large data type
*/
#include<stdio.h>
int main()
{
	int n=20;
	float d=n;//implicit conversion from int to float
	printf("\nvalue of the d is:%f",d);
	return 0;
}
