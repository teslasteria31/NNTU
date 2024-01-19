#include<stdio.h>
#include<math.h>

int main()
{
	int a, b;

	printf("Enter width: ");
	scanf("%i", &a);
	printf("Enter high: ");
	scanf("%i", &b);

	for(int i = 0; i < b; i++)
	{
		for(int j = 0; j < a; j++)
		{
			if((j + i) % 2 == 0)
				printf("#");
			else
				printf("_");
		}
		printf("\n");
	}
}