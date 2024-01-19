#include<stdio.h>
#include<math.h>

int main() {
	float a, b, c, discriminant, root1, root2;

	printf("Please, input a: ");
	scanf("%f", &a);
	printf("Please, input b: ");
	scanf("%f", &b);
	printf("Please, input c: ");
	scanf("%f", &c);

	discriminant = b * b - 4 * a * c;

	if (a != 0) {
		if (discriminant > 0) {
			root1 = (-b + sqrt(discriminant)) / (2 * a);
			root2 = (-b - sqrt(discriminant)) / (2 * a);

			printf("First root: x1 = %.2f\n", root1);
			printf("Second root: x2 = %.2f\n", root2);
		} else if (discriminant == 0) {
			root1 = -b / (2 * a);
			printf("Root: x = %.2f\n", root1);

		} else if (discriminant < 0) {
			printf("The expression does not contain real roots");

		}
	} else {
		root1 = -c / b;
		printf("Root: x1 = %.2f\n", root1);

	}
}