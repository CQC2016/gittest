#include "stdio.h"

int max(int a, int b)
{
	return a>b?a:b;
}


void main(void)
{
	int a = 1;
	int b = 3;
	printf("The max number is : %d", max(a,b));
}
