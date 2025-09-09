#include <stdio.h>

int main() {
    char mot[50];
    char car;
    int count = 0;
    
    printf("Entrez un mot: ");
    fgets(mot, 50, stdin);
    
    printf("Entrez un caractere: ");
    scanf("%c", &car);
    
    for(int i=0; mot[i] != '\0'; i++) {
        if(mot[i] == car) {
            count++;
        }
    }
    
    printf("Le nombre des occurrences: %d", count);
    
    return 0;
}