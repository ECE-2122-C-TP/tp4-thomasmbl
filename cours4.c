//
// Created by thoma on 29/09/2021.
//

#include <stdio.h>


int getMax(int a, int b) {
    int max = ( a > b ) ? a : b;
    return max;
}

int saisirEntier() {
    int a=0;
    printf("Saisir un entier\n");
    scanf(" %d", &a);
    return a;

}

int calculAire(int a, int b) {
    int aire = a * b;
    return aire;

}

int calculPerimetre(int a, int b) {
    int perimetre = 2*a +2*b;
    return perimetre;

}

int testMultiple(int a, int b) {
    int test = ( a % b == 0) ? 1 : 0;
    return test;

}

float verifMoyenne(int a, int b, int c) {
    float moyenne=0;
    if((a>=0,a<=20) && (b>=0,b<=20) && (c>=0,c<=20)) {
        moyenne = (float) (a+b+c) / (float) 3;
    }
    else {
        moyenne = -1;
    }
    return moyenne;
}

int totalEleve(int a) {
    int total=0, i=0, eleve=0;
    for (i=1;i<a+1;i++) {
        eleve = saisirEntier();
        total += eleve;
    }
    return total;
}
int sommeCarre(int a) {
    int i=0, s=0;
    for(i=0;i<a+1;i++) {
        s += i*i;
    }
    return s;
}

int etagePyramide(int a) {
    int i = 0, s=0;
    while( a > s) {
        i++;
        s += i * i;
        if (a < s + (i + 1) * (i + 1))
            break;
    }
    return i;
}

int somme(int a, int b) {
    a += b;
    return a;
}

float moyenne(int a, int b) {
    float moy = (float) a / (float) b ;
    return moy;
}

