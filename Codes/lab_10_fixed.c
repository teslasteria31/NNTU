#include <stdio.h>
#include <math.h>

void solve_quadratic_equation(double a, double b, double c, int* num_of_roots, double* root1, double* root2) {
    double discriminant = b * b - 4 * a * c;

    if (a != 0) {
        if (discriminant > 0) {
            *num_of_roots = 2;
            *root1 = (-b + sqrt(discriminant)) / (2 * a);
            *root2 = (-b - sqrt(discriminant)) / (2 * a);
        } else if (discriminant == 0) {
            *num_of_roots = 1;
            *root1 = -b / (2 * a);
        } else {
            *num_of_roots = 0;
        }
    } else if (a == 0) {
        *num_of_roots = 1;
        *root1 = -c / b;
    } 
}

int main() {
    double a, b, c;
    int num_of_roots;
    double root1, root2;

    printf("Input a, b, c of ax^2 + bx + c = 0:\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    solve_quadratic_equation(a, b, c, &num_of_roots, &root1, &root2);

    printf("Number of roots: %d\n", num_of_roots);
    if (num_of_roots == 1) {
        printf("Root: %lf\n", root1);
    } else if (num_of_roots == 2) {
        printf("Roots: %lf, %lf\n", root1, root2);
    } else {
        printf("The expression has no any real roots\n");
    }

    return 0;
}