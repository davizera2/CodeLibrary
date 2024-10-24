#include <stdio.h>
#include <stdlib.h>

struct Livro{
    char title[100];
    char autor[100];
    int ano;
};

int main(){
    struct Livro livros[3];
    int op, numLivros = 0;

    do {
        printf("[1] Cadastrar livro.\n");
        printf("[2] Visualizar livros.\n");
        printf("[3] Sair.\n");
        
        scanf("%d", &op);
        getchar();

        switch(op) {
            case 1: {
                if(numLivros < 3){
                    printf("Digite o titulo do livro: ");
                    fgets(livros[numLivros].title, 100, stdin);

                    printf("Insira o autor: ");
                    fgets(livros[numLivros].autor, 100, stdin);

                    printf("Insira o ano de publicacao do livro: ");
                    scanf("%d", &livros[numLivros].ano);
                    getchar();

                    numLivros++;
                }
                break;
            }
            

            case 2: {
                printf("Livros cadastrados: \n");

                for(int i = 0; i < numLivros; i++){
                    printf("Titulo: %s", livros[i].title);
                    printf("Autor: %s", livros[i].autor);
                    printf("Ano: %d\n", livros[i].ano);
                    printf("- - - - - - - - -\n");
                }
                break;
            }
            

            case 3: 
                printf("Encerrando programa ... \n");
                break;

            default: 
                printf("Opcao invalida.\n");
                break;
        }
    } while (op != 3);
    return 0;
}