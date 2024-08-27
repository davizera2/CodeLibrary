#include <stdio.h>
#define tam 3
int main() {
    float valores[tam], qtd_vendida[tam];
    int i;
    float soma = 0.0;
    float total_obj[tam];
   
    for(i = 0; i < tam; i++){
        printf("VALOR DO PRODUTO [%d]:",i);
        scanf("%f", &valores[i]);
        printf("QUANTIDADE VENDIDA DO PRODUTO [%d]:",i);
        scanf("%f", &qtd_vendida[i]);
        total_obj[i] = valores[i] * qtd_vendida[i];
        soma += total_obj[i];
    }
   
    float total = (0.05*soma) + 545.00;
    printf("\nVALOR GERAL DAS VENDAS: R$ %.2f\n", soma);
    for(i = 0; i < tam; i++){
        printf("QUANTIDADE VENDIDA DO OBJ %d: %.2f \t VALOR UNITARIO: R$ %.2f \t VALOR TOTAL : R$ %.2f\n",i,qtd_vendida[i], valores[i], total_obj[i]);
    }
   
    float mv = qtd_vendida[0];
    int pos;
   
    for(i = 1; i < tam; i++){
        if(qtd_vendida[i] > mv){
            mv = qtd_vendida[i];
            pos = i;
        }
    }
    printf("O VALOR DO OBJETO QUE MAIS FOI VENDIDO EH: R$ %.2f\t SUA POSICAO: %d\n", mv, pos);
    return 0;
}
