#include <stdio.h>
#include <math.h>
#include <stdbool.h>

char getSymbol(double);
void plotPoint(int, char);

int main()
{
    double amplitude = 30.0;
    double angle;
    double sinVal;
    double cosVal;
    double maxAngle = M_PI * 2;
    int numSteps;
    int position;
    int i;

    do {
        printf("Input the number of steps: ");
        scanf("%d", &numSteps);
    } while (numSteps < 2);

    for(i = 0; i <= numSteps; i++)
    {
        angle = (double)i / (double)numSteps * maxAngle;
        sinVal = sin(angle);
        cosVal = cos(angle);
        position = (int)amplitude + (int)(amplitude * sinVal);
        printf("%3d: %5.2f %6.3f", i, angle, sinVal);
        plotPoint(position, getSymbol(cosVal));
    }
}

char getSymbol(double derivative) {
    if (fabs(derivative) < 0.1) {
        return '*';
    }

    if (derivative > 0) {
        return '\\';
    } else {
        return '/';
    }
}

void plotPoint(int position, char symbol) {
    for (int i = 0; i < position + 1; i++) {
        printf(" ");
    }
    printf("%c\n", symbol);
}