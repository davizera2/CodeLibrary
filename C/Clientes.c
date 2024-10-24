#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Cliente{ 
    char nome[100];        
    char email[100];
}; 

int main(){
    struct Cliente clientes[100];
    int op, numClientes = 0;

    do {
        printf("Selecione uma opcao: \n");
        printf("1. Adicionar cliente.\n");
        printf("2. Visualizar cliente.\n");
        printf("3. Editar cliente.\n");
        printf("4. Excluir cliente.\n");
        printf("5. Sair.\n");

        scanf("%d", &op);
        getchar();
        
        switch(op){

            case 1: {
                
                printf("Digite o nome do cliente: ");
                fgets(clientes[numClientes].nome, 100, stdin);
                
                printf("Digite o email do cliente: ");
                fgets(clientes[numClientes].email, 100, stdin);

                numClientes++;
                printf("Cliente cadastrado com sucesso. \n");
                break;
            }
            case 2: { 
                printf("Clientes cadastrados:\n");

                for (int i = 0; i < numClientes; i++){
                    printf("Nome: %s\n", clientes[i].nome);
                    printf("Email: %s\n", clientes[i].email);
                    printf("---------------------------\n");
                }
                break;
            }
            case 3: {
                char nome[100];

                printf("Digite o nome do cliente que deseja editar: ");
                fgets(nome, 100, stdin);
                int i;
                for (i = 0; i < numClientes; i++){
                    if (strcmp(clientes[i].nome, nome) == 0) {
                        printf("Digite o novo nome do cliente: ");
                        fgets(clientes[i].nome, 100, stdin);

                        printf("Digite o novo email do cliente: ");
                        fgets(clientes[i].email, 100, stdin);

                        printf("Cliente editado com sucesso.\n");
                        break;
                    }
                }
                break;                
            }

            case 4: {
                char nome[100];

                printf("Digite o nome do cliente que deseja excluir: ");
                fgets(nome, 100, stdin);

                for (int i = 0; i < numClientes; i++){
                    if (strcmp(clientes[i].nome, nome) == 0) {
                     for (int j = i; j < numClientes - 1; j++) {
                        clientes[j] = clientes[j+1];
                     }

                     numClientes--;
                    
                     printf("Cliente excluido com sucesso.\n");
                     break;
                    }
                }
                break;
            }

            case 5: 
                printf("Finalizando o programa ... \n");
                break;
            default: 
                printf("Opcao invalida.\n");
                break;
        }
    } while(op != 5);

    return 0;
}

