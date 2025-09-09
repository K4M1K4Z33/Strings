#include <stdio.h>
#include <ctype.h>

int main() {
    char mot[50];
    
    printf("Entrez un mot: ");
    fgets(mot, 50, stdin);
    
    for(int i=0; mot[i] != '\0'; i++) {
        mot[i] = tolower(mot[i]);
    }
    
    printf("Le mot en minuscules: %s", mot);
    
    return 0;
}