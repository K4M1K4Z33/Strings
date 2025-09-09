#include <stdio.h>
#include <string.h>

int main() {
    char mot[50];
    
    printf("Entrez un mot: ");
    fgets(mot, 50, stdin);
    
    printf("Le mot entre: %s", mot);
    
    return 0;
}