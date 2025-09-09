#include <stdio.h>
#include <string.h>

int main() {
    char texte[200];
    char sous_texte[200];
    
    printf("Entrez le texte: ");
    fgets(texte, 200, stdin);
    
    printf("Entrez la sous-chaine: ");
    fgets(sous_texte, 200, stdin);
    
    texte[strcspn(texte, "\n")] = '\0';
    sous_texte[strcspn(sous_texte, "\n")] = '\0';
    
    if(strstr(texte, sous_texte) != NULL) {
        printf("Trouve");
    } else {
        printf("Non trouve");
    }
    
    return 0;
}