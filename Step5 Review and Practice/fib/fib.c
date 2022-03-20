#include <stdio.h>

/* 
 * Program to compute Fibonacci numbers
 */

int main() {
    
    int f = 0;           /* Computed Fibonacci number */
    int n = 1;           /* Next Fibonacci number */
    int tmp;             /* tmp Fibonacci number */
    int i;               /* Loop counter */
    
    /* Print 10 Fibonacci numbers */
    for (i = 0;  i < 12;  i++) {
        printf("F(%d) = %d\n", i, f);
        
        /* Update new Fibonacci number */
        tmp = n;
        n = f + n;
        f = tmp;
    }
}
