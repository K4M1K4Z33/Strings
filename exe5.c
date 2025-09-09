#include <stdio.h>
#include <string.h>

int main() {
    char mot[50];
    
    printf("Entrez un mot: ");
    fgets(mot, 50, stdin);
    
    int longueur = strlen(mot);
    
    for(int i = 0; i < longueur/2; i++) {
        char temp = mot[i];
        mot[i] = mot[longueur-1-i];
        mot[longueur-1-i] = temp;
    }
    
    printf("l inverse de ce mot: %s", mot);
    
    return 0;
}