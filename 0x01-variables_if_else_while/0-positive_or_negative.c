#include <stdio.h>

int main (){

    int nbr;
    printf("Veuillez saisir un nombre\n ");
    scanf("%d",&nbr);
    if (nbr<0)
        printf("%d is negatif \n",nbr);
    if (nbr ==0)
        printf("%d is zero \n",nbr);
    if (nbr >0)
        printf("%d is positif",nbr);

}
