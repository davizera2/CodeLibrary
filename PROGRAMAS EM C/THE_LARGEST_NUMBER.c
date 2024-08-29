#include <stdio.h>
#define tam 5
int bigger(int v[tam]){
    int maior = v[0];
    for(int i = 1; i < tam; i++){
        if(maior < v[i]){
            maior = v[i];
        }
    }
    return maior;
}

int main(){
    int vet[tam];
    printf("Digite %d valores: \n", tam);
    for(int i = 0; i < tam; i++){
        scanf("%d", &vet[i]);
    }    
    printf("O maior eh: %d", bigger(vet));
    return 0;
}
  