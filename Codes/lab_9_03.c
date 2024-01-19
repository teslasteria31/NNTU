#include<stdio.h>

int stack_overflow()
{
	return stack_overflow();
}
int main()
{
	printf("stack overflow: %d\n", stack_overflow());
}