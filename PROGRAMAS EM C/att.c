#include <stdio.h>
int main() {
    int vet[6];
    int i, cont_par = 0, cont_imp = 0;
    
    for(i = 0; i < 6; i++){
        scanf("%d", &vet[i]);
    }
    
    printf("PARES: \n");
    for(i = 0; i < 6; i++){
        if(vet[i] % 2 == 0 && vet[i] != 1){
            printf("%d\n", vet[i]);
            cont_par++;
        }
        else{
            cont_imp++;
        }
    }
    printf("IMPARES: \n");
    for(i = 0; i < 6; i++){
        if(vet[i] % 2 != 0){
            printf("%d\n", vet[i]);
        }
    }
    
    printf("QUANTIDADE DE PARES: %d\n",cont_imp);
    printf("QUANTIDADE DE IMPARES: %d\n",cont_par);
    return 0;
}