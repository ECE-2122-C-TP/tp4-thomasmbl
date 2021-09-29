//
// Created by thoma on 29/09/2021.
//

#include <stdio.h>

// Renvoie le max entre 2 entiers
// IN Entiers a et b
// OUT max entre a et b
int getMax(int a, int b) {
    int max = ( a > b ) ? a : b;
    return max;
}

// Demande a l'utilisateur d'entrer un entier
// IN pas d'entree
// OUT entier saisit
int saisirEntier() {
    int a=0;
    printf("Saisir un entier\n");
    scanf(" %d", &a);
    return a;

}

// Calcule l'air
// IN Entiers a et b 
// OUT aire ( entier )
int calculAire(int a, int b) {
    int aire = a * b;
    return aire;

}

// Calcule perimetre
// IN Entiers a et b
// OUT perimetre ( entier )
int calculPerimetre(int a, int b) {
    int perimetre = 2*a +2*b;
    return perimetre;

}

//Verifie si notre entier a et multiple de notre entier b
// IN Entiers a et b
// OUT resultat du test ternaire
int testMultiple(int a, int b) {
    int test = ( a % b == 0) ? 1 : 0;
    return test;

}

// Verifie si les 3 notes saisit sont bien comprise entre 0 et 20 inclus
// IN Entiers a b et c ( les notes ) 
// OUT si nos notes sont conformes alors moyenne sinon -1 
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

// Somme les eleves de a classes
// IN Nombre de classes
// OUT La somme des eleves dans les a classes
int totalEleve(int a) {
    int total=0, i=0, eleve=0;
    for (i=1;i<a+1;i++) {
        eleve = saisirEntier();
        total += eleve;
    }
    return total;
}

//Calcule la somme des i carre pour i allant de 0 à a
// IN Valeur de a
// OUT La somme des carres pour i allant de 0 à a
int sommeCarre(int a) {
    int i=0, s=0;
    for(i=0;i<a+1;i++) {
        s += i*i;
    }
    return s;
}

//Donne le nombre d'etage qu'il est possible de faire avec a pierres
// IN nombre de pierres
// OUT nombre d'etage max
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



// Calucule la moyenne des notes
// IN Somme des notes , Nombre de notes
// OUT Renvoie la moyenne
float moyenne(int a, int b) {
    float moy = (float) a / (float) b ;
    return moy;
}

