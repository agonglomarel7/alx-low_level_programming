#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void){
    /**
 * main - entry point
 *
 * Return:always return 0
 *
 */

    int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
    if (n <0)
    {
        printf("%d is negatif \n",n);
    }
    else if(n ==0){
        printf("%d is zero \n",n);

    }
    else {

        printf("%d is positif",n);
    }
    return 0;
} 
