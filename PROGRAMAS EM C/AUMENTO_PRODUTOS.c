#include <stdio.h>
#define tam 10
int main(){
    char produto[tam][50];
    int codigo[tam];
    float preco[tam], new_preco[tam] = {0};
    int i;
    
    for(i = 0; i < tam; i++){
        printf("Produto: ");
        scanf("%49s", produto[i]);
        printf("Codigo: ");
        scanf("%d", &codigo[i]);
        printf("Preco: R$ ");
        scanf("%f", &preco[i]);
        printf("\n");
        
        if(codigo[i] % 2 == 0 && codigo[i] != 1 && preco[i] > 1000.00){
            new_preco[i] += (0.20*preco[i]) + preco[i];
        }
        else if(codigo[i] % 2 == 0 && codigo[i] != 1){
            new_preco[i] += (0.15*preco[i]) + preco[i];
        } 
        else if(preco[i] > 1000.00){
            new_preco[i] += (0.10*preco[i] + preco[i]);
        }
    }
    
    printf(" --- RELATORIO --- \n");
    printf("Produto Codigo Preco R$ Novo Preco R$\n");
    for(i = 0; i < tam; i++){
        if(new_preco[i] != 0)
            printf("%s\t%d\t%.2f\t%.2f\n", produto[i], codigo[i], preco[i], new_preco[i]);
    }
    return 0;
}