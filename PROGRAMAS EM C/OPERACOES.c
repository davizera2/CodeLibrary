#include <stdio.h>

void menu(){
    printf(" === MENU === \n");
    printf("[1]SOMA\n");
    printf("[2]SUBTRAÇÃO\n");
    printf("[3]MULTIPLICAÇÃO\n");
    printf("[4]DIVISÃO\n");
    printf("[5]SOMA DOS NUMEROS ENTRE ELES\n\n");
}

int somar(int a, int b){
    return a+b;
}
int subtrair(int a, int b){
    return a-b;
}
int produto(int a, int b){
    return a*b;
}
int dividir(int a, int b){
    return a / b;
}
int sum_in_them(int a, int b){
    int soma = 0;
    int temp;
    if(a > b){
        temp = a;
        a = b;
        b = temp;
    }
    for(int i = a+1; i < b; i++){
        soma+=i;
    }
    return soma;
}
int main(){
    int n1, n2, op;
    
    do{
    menu();
    printf("Escolha uma opcao: ");
    scanf("%d", &op);
    
    if(op == 0){
        printf("Encerrando o programa ...\n");
    }
    
    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    printf("\n");
    
    switch(op){
        case 1:
            printf("Soma: %d\n",somar(n1,n2));
            break;
        case 2:
            printf("Subtracao: %d\n",subtrair(n1,n2));
            break;
        case 3:
            printf("Produto: %d\n",produto(n1,n2));
            break;
        case 4:
            if(n2 != 0){
                printf("Divisao: %d\n",dividir(n1,n2));
                break;
            }    
            else{ 
                printf("Divisao por 0 nao eh permitida!\n");
                break;
            }
        case 5:
             printf("Soma entre eles: %d\n",sum_in_them(n1,n2)); 
             break;
        default:
            printf("Opcao invalida ...\n");
        }
        int opcao;
        printf("\nDigite [1] para prosseguir ...\n");
        printf("Digite [0] para encerrar ...\n");
        scanf("%d", &opcao);
        if(op == 1){
            continue;
        }
        else if(opcao == 0){
            printf("Obrigado!");
            break;
        }
    } while(op != 0);
    
    return 0;
}