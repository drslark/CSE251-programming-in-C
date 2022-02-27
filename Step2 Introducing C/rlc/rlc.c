#include <stdio.h>
#include <math.h>

int main()
{
    double c;
    double l;

    printf("Input Capacitance (microfarads): ");
    scanf("%lf", &c);
    printf("Input Inductance (millihenrys): ");
    scanf("%lf", &l);

    double omega = 1.0 / (sqrt((c / 1.0e6) * (l / 1.0e3)));
    double f = omega / 2.0 / M_PI;

    printf("Resonant Frequency is %7.3f\n", f);
}
