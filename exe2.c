#include <stdio.h>
#include <string.h>

int main() {
    char mot[50];
    int longueur = 0;
    
    printf("Entrez un mot: ");
    fgets(mot, 50, stdin);
    
    while(mot[longueur] != '\0') {
        longueur++;
    }
    
    printf("Longueur de  mot: %d", longueur - 1);
    
    return 0;
}