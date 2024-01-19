#include<stdio.h>
#include<math.h>

int main()
{
	int a, b, c, t0, t1, t2;
	printf("input a: ");
	scanf("%i", &a);
	printf("input b: ");
	scanf("%i", &b);
	printf("input c: ");
	scanf("%i", &c);
	
	t0 = a * pow(0, 2) + b * 0 + c;
	t1 = a * pow(1, 2) + b * 1 + c;
	t2 = a * pow(2, 2) + b * 2 + c;

	int det10 = t1 - t0;
	int det21 = t2 - t1;
	int dsq = det21 - det10;

	printf("t0 = %i\n", t0);
	printf("t1 = %i\n", t1);
	printf("t2 = %i\n", t2);

	printf("det_10 = %i\n", det10);
	printf("det_21 = %i\n", det21);
	printf("det_progression = %i\n", dsq);

	int t;

	for(int i = 3; i <= 100; i++)
	{
		t = a * pow(i, 2) + b * i + c;
		det21 += dsq;
		t2 += det21;
		printf("t%i = %i\n", i, t);
		printf("t%i = %i\n", i, t2);
	}
}