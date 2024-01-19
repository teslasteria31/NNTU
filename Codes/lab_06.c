#include<stdio.h>

int main()
{
	int a;
	printf("enter a: ");
	scanf("%i",&a);

	if(a % 2 == 0)
	{
		printf("the number is even");
	}
	else
	{
		printf("the number is uneven\n");
		printf("the remnant is %d", a % 2);
	}
}