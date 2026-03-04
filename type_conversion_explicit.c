/*type conversion 
2)explicit coversion
*/
#include<stdio.h>
int main(){
	float num=6.00;
	int result;
	// explicit conversion from float to integer
	result=(int) num;
	printf("float value:%f\n",num);
	printf("integer value after casting:%d\n",result);
	return 0;
}
