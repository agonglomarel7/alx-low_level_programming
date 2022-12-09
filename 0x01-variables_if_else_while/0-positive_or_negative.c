 #include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (void){

    int nbr;

srand(time(0));
nbr = rand() - RAND_MAX / 2;
    if (nbr<0)
        printf("%d is negatif \n",nbr);
    if (nbr ==0)
        printf("%d is zero \n",nbr);
    if (nbr >0)
        printf("%d is positif",nbr);

    return 0;
} 
