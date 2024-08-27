#include <stdio.h>
#define tam 3

int main(){
    char nome[tam][16];
    float media[tam];
    int i, maior = 0;
    
    for(i = 0; i < tam; i++){
        printf("\nNome: ");
        scanf("%15s", nome[i]);
        printf("Media: ");
        scanf("%f", &media[i]);
        
        if(media[i] > media[maior]) maior = i;
        
        float nota_nec = 0;
        if(media[i] < 7){
            printf("\n=== Recuperacao ===\n");
            nota_nec = (5 * 2) - media[i];
            printf("Nota necessaria: %.2f\n", nota_nec);
            printf("=== Recuperacao === \n");
        }
    }
    printf("\nMelhor aluno: %14s",nome[maior]);
     
    return 0;
}