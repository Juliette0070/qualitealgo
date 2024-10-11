#include <stdio.h>
#include "liste.h"

int main(void){
    lst liste = creerListe();
    printf("Il y a une liste vide à l'adresse %p\n", liste);
    printf("Ma liste a %d éléments\n", liste->nbElem);
}