#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/* 
 * Simple lunar lander program.
 * By: drslark
 */
 
int main() {

    printf("Lunar Lander - (c) 2012, by drslark\n");

    double altitude = 100.0;  /* Meters */
    double velocity = 0.0;    /* Meters per second */
    double fuel = 100.0;      /* Kilograms */
    double power = 1.5;       /* Acceleration per pound of fuel */
    double g = -1.63;         /* Moon gravity in m/s^2 */
    double burn;              /* Amount of fuel to burn */ 
    double burn_limit = 5.0;  /* Amount linit of fuel to burn */

    int time = 0;             /* time escaped */

    bool valid;               /* Valid data entry flag */

    while (altitude > 0) { 

        printf("Altitude: %.2f\n", altitude);
        printf("Velocity: %.2f\n", velocity);
        printf("You have %.1f kilograms of fuel\n", fuel);

        do {
            valid = false;   /* Assume invalid until we know otherwise */

            printf("How much fuel would you like to burn: ");
            scanf("%lf", &burn);

            if (burn < 0) {
                printf("You can't burn negative fuel\n");
            } else if (burn > fuel) {
                printf("You can't burn fuel you don't have\n");
            } else if (burn > burn_limit) {
                printf("You can't burn more than %.2f kilograms of fuel\n", burn_limit);
            } else {
                printf("Burning %.1f kilograms of fuel\n", burn);
                valid = true;
            }
        } while (!valid);

        velocity = velocity + g + power * burn;
        altitude += velocity;
        fuel -= burn;
    }

    printf("You landed in %d s, %.2f fuel remaining, with a velocity of %.2f\n", time, fuel, velocity);
    
    if (fabs(velocity) > 3) {
        printf("Your next of kin have been notified\n");
    }

}
