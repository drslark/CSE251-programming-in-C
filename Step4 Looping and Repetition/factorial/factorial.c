#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int f;      /* Number we compute the factorial of */
    int i;      /* Temp value to compute the factorial */
    int fac;    /* Initial value of factorial */
    bool flag = false;  /* Sign to terminate */

    while (!flag) {
        printf("Number to compute the factorial of: ");
        scanf("%d", &f);
        if (f < 0) {
            flag = true;
            continue;
        }

        fac = 1;
        i = f;
        while (i > 0) {
            fac *= i;
            i--;
        }

        printf("%d! = %d\n", f, fac);       
    }
}