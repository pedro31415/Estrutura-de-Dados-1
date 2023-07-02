#include <stdio.h>
#define TAM 5

int stack[TAM];

void push(int p[], int tamanho, int info){
    int i;
    for (i = 0; i < tamanho; i++){
        if (p[i] == 0){
            p[i] = info;
            return;
        }
    }

    printf("Não foi possível adicionar o valor %d à stack. A stack está cheia.\n",info);
}

void listar(int p[], int tamanho){
    int i;
    if (p[0] == 0){
        printf("A stack está vazia.\n");
        return;
    }
    for (i = tamanho - 1; i >= 0; i--){
        if (p[i] != 0)
            printf("%d\n",p[i]);
    }
    printf("\n");
}

int buscar_linear(int p[], int tamanho, int key){
    int i;
    for (i = tamanho - 1; i >= 0; i--){
        if (p[i] == key)
            return i;
    }
    return -1;
}

void pop(int p[], int tamanho){
    int i;
    for (i = tamanho - 1; i >= 0; i--){
        if (p[i] != 0){
            p[i] = 0;
            return;
       }
    }
    printf("A stack está vazia");
}



int main() {
    
    int x;
    int y,posicao;
    while(1){
        printf("Informe o valor: ");
        scanf("%d",&x);
        if (x == 0)
            break;

        push(stack, TAM, x);
    }
    listar(stack, TAM);
    pop(stack, TAM);
    listar(stack, TAM);
    printf("Informe o valor que deseja buscar: ");
    scanf("%d",&y);

    posicao = buscar_linear(stack, TAM, y);

    if (posicao == -1){
        printf("Não encontramos nenhum registro para a sua busca\n\n");
    }
    else{
        printf("O valor foi encontrado na posição: %d\n\n", posicao);
    }

    return 0;
}