#include <stdio.h>
#include <ctype.h>

int main() {
    char mot[50];
    
    printf("Entrez un mot: ");
    fgets(mot, 50, stdin);
    
    for(int i=0; mot[i] != '\0'; i++) {
        mot[i] = toupper(mot[i]);
    }
    
    printf("Le mot en majuscules: %s", mot);
    
    return 0;
}