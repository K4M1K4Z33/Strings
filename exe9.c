#include <stdio.h>

int main() {
    char phrase[200];
    
    printf("Entrez une phrase: ");
    fgets(phrase, 200, stdin);
    
    printf("Sans espaces: ");
    for(int i=0; phrase[i] != '\0'; i++) {
        if(phrase[i] != ' ') {
            printf("%c", phrase[i]);
        }
    }
    
    return 0;
}