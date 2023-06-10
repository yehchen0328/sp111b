#include <stdio.h>

double integrate(double (*f)(double), double a, double b) {

    double num = 0.001;
    double sum = 0.0;
    double x;

    for (x = a; x < b; x += num) {
        sum += f(x) * num;
    }

    return sum;
}

double square(double x) {
    return x * x;
}

int main() {
    printf("integrate(square, 0.0, 2.0) = %f\n", integrate(square, 0.0, 2.0));
    return 0;
}