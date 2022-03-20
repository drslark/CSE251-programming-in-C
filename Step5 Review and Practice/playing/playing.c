#include <stdio.h>

void first_playing();
void second_playing();
void third_playing();
void fourth_playing();

int main() {
    printf("Playing Computer\n");
    printf("----------------\n");
    first_playing();
    printf("----------------\n");
    second_playing();
    printf("----------------\n");
    third_playing();
    printf("----------------\n");
    fourth_playing();
    printf("----------------\n");
}

void first_playing() {
    int i = 1;
    int sum = 0;
    
    while(i < 5) {
        sum += i;
        i++;
    }
    
    printf("sum=%d\n", sum);
}

void second_playing() {
    double q = 1;
    int i; 
    
    for (i = 1; i <= 5; i++) {
        q += i * i / 2.0;
    }
    
    printf("q=%f\n", q);
}

void third_playing() {
    double q = 1;
    
    do {
        q = q * 2;
    } while(q < 0);
    
    printf("q=%f\n", q);
}

void fourth_playing() {
    int i;
    int j;
    
    for (i = 0; i < 11; i++) {
        if(i < 5) {
            for(j = 0; j <= i; j++)
                printf("+");
        } else {
            for(j = 0; j <= (10 - i); j++)
                printf("+");
        }
        
        printf("\n");
    }

    printf("---\n");   
}
