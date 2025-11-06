/*Esercizio 5 – Scambio di 3 variabili
Richiedi all’utente di inserire tre numeri interi e memorizzali in tre variabili chiamate a b c, fai un programma che 
ne scambi il contenuto in modo che alla fine dell’esecuzione ogni variabile contenga quanto inizialmente presente nella
 variabile chiamata con la lettera precedente in ordine alfabetico, ad esclusione della a che conterrà il contenuto di quanto
  inizialmente presente in c.*/


    #include <stdio.h>
    int main() {
    int a, b, c,temp;
    printf("inserire tre numeri.\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
     temp = a; 
     a = c;     
     c = b;     
     b = temp; 

    printf("Dopo lo scambio:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);
    
    return 0;

    }
    

