#include <stdio.h> 

int main() { 
    int base, altezza, area, perimetro;

    printf("inserisci base e altezza del rettangolo: "); 
    scanf("%d", &base);
    scanf("%d", &altezza);
    area = base * altezza;
    perimetro = (base + altezza) * 2;

    printf("l'area del rettangolo è %d e il perimetro è %d", area, perimetro);

    return 0;
}