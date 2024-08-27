#include <stdio.h>
# define tam 3
int main(){
    int vet[tam];
    int i, j, m = 0;
    
    printf("PREENCHA A LISTA:\n");
    for(i = 0; i < tam; i++){
        scanf("%d",&vet[i]);
    }
    printf("MULTIPLOS: \n");
    for(i = 0; i < tam; i++){
        
        if(vet[i] % 2 == 0 && vet[i] % 3 == 0){
            printf("%d eh multiplo de 2 e 3.\n",vet[i]);
        }
        else if(vet[i] % 3 == 0){
            printf("%d eh multiplo de 3.\n",vet[i]);
        }
        else if(vet[i] % 2 == 0){
            printf("%d eh multiplo de 2.\n", vet[i]);
        }
    }
    
    
    return 0;
}