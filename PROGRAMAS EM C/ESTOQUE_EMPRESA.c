#include <stdio.h>
#define tam 5

int main(){
int cliente, cod[tam], total_est[tam];
int i, j, codigo, qtd;

for(i = 0; i < tam; i++){
    printf("CODIGO PRODUTO: ");
    scanf("%d", &cod[i]);
    printf("QUANTIDADE DO PRODUTO [%d] NO ESTOQUE: ",cod[i]);
    scanf("%d", &total_est[i]);
}
do{
    
    printf("CLIENTE: ");
    scanf("%d", &cliente);
    if(cliente == 0){
        break;
    }
    printf("CODIGO DO PRODUTO: ");
    scanf("%d", &codigo);
    printf("QUANTIDADE DESEJADA: ");
    scanf("%d", &qtd);
    
    
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(codigo == cod[i] && qtd < total_est[i]){
                total_est[i] -= qtd;
                qtd = 0;
                printf("Pedido atendido. Obrigado e volte sempre.\n");
                i = tam;
                j = tam;
            }
            else if(total_est[i] < qtd){
                printf("Nao temos estoque suficiente nessa mercadoria\n");
                i = tam;
                j = tam;
            }
            else{
                printf("Codigo inexistente\n");
                i = tam;
                j = tam;
            }
        }
    }
    
} while(cliente != 0);

printf("\nCODIGO\tESTOQUE\n");
for(i = 0; i < tam; i++){
    printf("%d\t\t%d\n", cod[i], total_est[i]);
}

}