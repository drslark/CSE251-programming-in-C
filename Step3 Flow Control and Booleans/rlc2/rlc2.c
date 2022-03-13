#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int main()
{
    bool valid = true;  /* Until we know otherwise */
    double c;
    double l;

    printf("Input Capacitance (microfarads): ");
    scanf("%lf", &c);
    printf("Input Inductance (millihenrys): ");
    scanf("%lf", &l);

    /* Test to see if the user entered an invalid capacitance. */    
    if(c < 0) {
        printf("You moron, you entered a negative capacitance!\n");
        valid = false;
    }
    else if(c == 0) {
        printf("You are really dumb, you entered a zero capacitance!\n");
        valid = false;
    }
    else {
        printf("Okay, I guess that's a reasonable capacitance.\n");
    }

     /* Test to see if the user entered an invalid inductance. */    
    if(l < 0) {
        printf("You moron, you entered a negative inductance!\n");
        valid = false;
    }
    else if(l == 0) {
        printf("You are really dumb, you entered a zero inductance!\n");
        valid = false;
    }
    else {
        printf("Okay, I guess that's a reasonable inductance.\n");
    }
 
    if (valid) {
        double omega = 1.0 / (sqrt((c / 1e6L) * (l / 1e3L)));
        double f = omega / 2.0 / M_PI;

        printf("Resonant Frequency is %7.3f\n", f);

        if (f >= 20 && f <=20000) {
            printf("This frequency is one I can hear!\n");
        }
    }
}
