#include <stdio.h>
#include <math.h>

/*
 * Name : drslark
 *
 * This is my first CSE 251 C program!!!
 */
int main()
{
    printf("My first C program\n");

    double radius = 7.88;
    double height = 12.231;
    double volume;

    volume = radius * radius * M_PI * height;
    printf("The cylinder has a radius of %4.2f, a height of %5.2f and a volume of %7.2f.\n", radius, height, volume);

    int wins = 11;
    int losses = 2;
    int games;

    games = wins + losses;
    printf("MSU had an %d-%d(%d) season in 2010!\n", wins, losses, games);

    double near = 10;
    double far = 22.5;
    double hypot;
    hypot = sqrt(near * near + far * far);
    printf("The hypot is %5.2f.\n", hypot);

    double bottleVolume = 1700; /* Milliliters */
    double cupVolume = 350;     /* Milliliters */
    int numCups;

    numCups = (int)(bottleVolume / cupVolume);
    printf("Number of cups: %d\n", numCups);
}
