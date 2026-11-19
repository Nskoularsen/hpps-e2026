#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
    srand(time(NULL));

    float x = 1.23;

    printf("geuss my number\n");


    float guess;

    while (1) {
        if (scanf("%f", &guess) == 1) {
            if (guess < x) {
                printf("Too Low\n");
            }
            else if (guess > x) {
                printf("Too high\n");
            }
            else {
                printf("YES my number is %f\n",x);
                break;
            }
        }
        else {
            printf("Not a float");
            break;
        }
    }
    return 0;
    
}


