#include <stdio.h>
#include <string.h>

int main() {
    char mot1[50], mot2[50], resultat[100];
    
    printf("Entrez le premier mot: ");
    fgets(mot1, 50, stdin);
    
    printf("Entrez le deuxieme mot: ");
    fgets(mot2, 50, stdin);
    
    strcpy(resultat, mot1);
    strcat(resultat, mot2);
    
    printf("Resultat: %s", resultat);
    
    return 0;
}