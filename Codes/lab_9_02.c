#include<stdio.h>
#include<math.h>

void roots(int a, int b, int c)
{
	int d = pow(b, 2) - 4 * a * c;

	if(a == 0)
	{
		float x = -c / (float)(b);
		printf("First root: x1 = %.5f\n", x);
	}

	else if(d > 0)
	{
		float x1 = (-1 * b + pow(d, 0.5f)) / 2 * a;
		float x2 = (-1 * b - pow(d, 0.5f)) / 2 * a;

		printf("First root: x1 = %.5f\n", x1);
		printf("Second root: x2 = %.5f\n", x2);
	}
	else if(d == 0)
	{
		float x = (-1 * b) / ((float)2 * a);
		printf("The root: x = %.5f\n", x);
	}
	else if(d < 0)
	{
		printf("The expression has no real roots");
	}
}

int main()
{
	int a, b, c;

	printf("input a: ");
	scanf("%i", &a);
	printf("input b: ");
	scanf("%i", &b);
	printf("input c: ");
	scanf("%i", &c);

	roots(a, b, c);
	return 0;
}