#include <stdio.h>
#define tam 3

float media_arit(float vet[tam]){
    float soma = 0.0;
    for(int i = 0; i < tam; i++){
        soma+=vet[i];
    }
    float media_a = soma / tam;
    return media_a;
}

float media_pond(float vet[tam]){
    float media_p = ((vet[0]*5)+(vet[1]*3)+(vet[2]*2))/10;
    return media_p;
}

int main(){
    int op;
    float notas[tam];
    int i;
    char letter;
    
    do{
    printf("Digite as %d notas: \n", tam);
    for(i = 0; i < tam; i++){
        scanf("%f", &notas[i]);
    }
    
    getchar();
    
    printf("Digite ... \n");
    printf("[A] calcular media aritmetica.\n");
    printf("[P] calcular media ponderada.\n");
    scanf("%c", &letter);
    
    if(letter == 'A'){
        printf("Media Aritmetica: %.2f\n", media_arit(notas));
    }
    else if(letter == 'P'){
        printf("Media Ponderada: %.2f\n", media_pond(notas));
    }
    
    printf("\nDigite ... \n");
    printf("[1] Continuar\n");
    printf("[2] Encerrar programa\n");
    scanf("%d", &op);
    if(op == 2){
        printf("Encerrando ...\n");
        break;
    }
    
    } while(op != 2);
    
    
    return 0;
}