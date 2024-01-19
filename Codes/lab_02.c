#include<stdio.h>
#include<math.h>

int main()
{
	int x1 = 7;
	int x2 = 14;
	int x3 = 29;

	int f1 = 2 * pow(x1, 2) + x1 + 41;
	int f2 = 2 * pow(x2, 2) + x2 + 41;
	int f3 = 2 * pow(x3, 2) + x3 + 41;

	printf("%i\n", f1);
	printf("%i\n", f2);
	printf("%i\n", f3);
}