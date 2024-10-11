#include "liste.h"
#include <stdio.h>
#include <time.h>

lst liste_premiers_entiers(int n){
    lst l = creerListe();
    for(int i = 0; i < n; i++){
        ajouterEnTete(l, i);
    }
    return l;
}

double mesure(int n, int i){
    lst l = liste_premiers_entiers(n);
    clock_t debut_mesure = clock();
    get(l, i);
    clock_t fin_mesure = clock();
    double temps = (double)(fin_mesure - debut_mesure) / CLOCKS_PER_SEC;
    supprimerListe(l);
    return temps;
}

int main(void){
    for (int n = 1; n < 1000000; n=10*n){
        printf("n$%d : |", n);
        for (int i = 0; i < n; i++){
            printf(" i=%d => %.2f |", i, mesure(n, i));
        }
    }
}
