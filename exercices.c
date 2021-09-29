//
// Created by thoma on 29/09/2021.
//

#include <stdio.h>
#include "cours4.h"

int exercice1() {
    int a=0, b=0;
    printf("Saisir 2 entiers\n");
    scanf(" %d%d", &a, &b);
    printf("Le max est %d\n", getMax(a,b));

}

int exercice3() {
    int largeur=saisirEntier(), longueur=saisirEntier();
    printf("Le perimetre est de %d metres\n", calculPerimetre(largeur,longueur));
    printf("L'aire est de %d m2\n", calculAire(largeur,longueur));

}

#define BORNE_INF 10
int exercice4() {
    int entier=saisirEntier();
    int multiple = testMultiple(entier,3) ;
    int sup = ( entier >= BORNE_INF ) ? 1 : 0;
    (multiple==1) ? printf("%d est multiple de 3\n", entier) : printf("%d n'est pas multiple de 3\n", entier) ;
    (sup==1) ? printf("%d est superieur ou egal a %d\n", entier, BORNE_INF) : printf("%d est inferieur strict a %d\n", entier, BORNE_INF) ;
}

int exercice5() {
    int note1 = saisirEntier(), note2=saisirEntier(), note3=saisirEntier();
    float moyenne = verifMoyenne(note1,note2,note3);
    if (moyenne==-1) {
        printf("Vos notes doivent etre entre 0 et 20!\n");
    }
    else {
        printf("La moyenne de vos 3 notes vaut %f\n", moyenne);
    }

}

int exercice7bis() {
    int nbClasse = saisirEntier();
    printf("Il y a %d eleves pour %d classes\n", totalEleve(nbClasse), nbClasse);
}

int exercice8bis() {
    int entier = saisirEntier();
    while (testMultiple(entier,7)!=1 || testMultiple(entier,2)!=1) {
        printf("%d n'est pas multiple de 7 ou multiple de 2, reessayer\n", entier);
        entier = saisirEntier();
    }
    printf("%d est multiple de 7 et de 2\n", entier);

}

int exercice9bis() {
    int nbPierre = saisirEntier();
    printf("%d pierres dispo pour %d etages\n", sommeCarre(etagePyramide(nbPierre)), etagePyramide(nbPierre));
}

int exercice10bis() {
    int entier=0, i=0, s=0;
    while ( entier >=0 ) {
        entier=saisirEntier();
        if (entier <0)
            break;
        s+=entier;
        i++;
    }
    if(i>0) {
        printf("La moyenne de vos %d nombres vaut %.2f\n", i, moyenne(s,i));
    }
}




