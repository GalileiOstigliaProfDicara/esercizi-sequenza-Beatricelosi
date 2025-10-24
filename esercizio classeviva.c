#include <stdio.h>

int main() {
    float prezzo, sconto, sconto_effettuato;
    printf("quanto è il prezzo?\n");
    scanf("%f", &prezzo);
    printf("quanto è lo sconto?\n");
    scanf("%f", &sconto);
    sconto_effettuato = prezzo*(sconto/100);
    printf("il prezzo pieno è: %f\n", prezzo);
    printf("lo sconto è di: %f\n", sconto_effettuato);
    printf("il prezzo scontato è: %f\n", prezzo-sconto_effettuato);
    return 0;
}