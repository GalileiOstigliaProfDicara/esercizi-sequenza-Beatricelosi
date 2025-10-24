/*Esercizio 4- Caramelle
Dato un numero di caramelle da dividere per un certo numero di amici, che ne devono ricevere
 tutti lo stesso numero, dire quante caramelle verranno date a testa e quante ne rimangono non distribuite.*/

#include <stdio.h>

int main() {
    int caramelle, amici, resto;
    printf("quante caramelle ci sono?\n");
    scanf("%d", &caramelle);
    printf("quanti amici ci sono?\n");
    scanf("%d", &amici);
    printf("ci sono: %d caramelle e %d amici\n", caramelle, amici);
    resto = caramelle - amici*(caramelle/amici);
    printf("le caramelle da dare ad ogni amico sono: %d\n", caramelle/amici);
    printf("il numero delle caramelle rimanenti è: %d\n", resto);    
    return 0;
}


