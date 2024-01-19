#include<stdio.h>

int fact_loop(int n)
{
	int res = 1;
	for(int i = 2; i <= n; i++) {
		res	*= i;
	}

	return res;
}

int fact_recur(int n)
{
	if(n > 1) {
		return n * fact_recur(n - 1);
	} else {
		return 1;
	}
}

int main()
{
	int n = 4;
	int res_l = fact_loop(n);
	int res_r = fact_recur(n);

	printf("loop: %d! = %d\n", n, res_l);
	printf("recur: %d! = %d\n", n, res_r);
}