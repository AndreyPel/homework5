#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <math.h>


double f(double x, double y)
{
    const double a = 7.1e-9;
    const double c = 2.0; 

    return (pow(a, 5.0) + pow(sin(y - c), 4.0)) / (pow(sin(x + y), 3.0) + fabs(x - y));
}

int main()
{
    setlocale(LC_ALL, "RUS");

    printf("F(-2.3, 10) = %f\n", f(-2.3, 10.0));

    printf("F(3.7e-5, -1) = %.3g\n", f(3.7e-5, -1.0));

    return 0;
}
