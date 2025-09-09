#include <stdio.h>
#include <string.h>

int main() {
    char mot1[50], mot2[50];
    
    printf("Entrez le premier mot: ");
    fgets(mot1, 50, stdin);
    
    printf("Entrez le deuxieme mot: ");
    fgets(mot2, 50, stdin);
    
    if(strcmp(mot1, mot2) == 0) {
        printf("Les mot sont identiques");
    } else {
        printf("Les mot sont differentes");
    }
    
    return 0;
}