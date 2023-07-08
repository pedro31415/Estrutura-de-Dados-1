#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct no{
    int dado;
    struct no *proximo;
}No;

int valor(){
    int x;
    printf("Informe o valor que você deseja adicionar na lista: ");
    scanf("%d", &x);
    return x;
}

void enqueue(No **queue){
    No *aux,*novo = malloc(sizeof(No));
    if(novo != NULL){
        novo->dado = valor();
        novo->proximo = NULL;
        if(*queue == NULL){
            *queue = novo;
        } else {
            aux = *queue;
            while (aux->proximo != NULL)
            {
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }
    }

}

No *dequeue(No **queue){
    No *remover = NULL;
    if(*queue != NULL){
        remover  = *queue;
        *queue = remover->proximo;
    } else {
        printf("A fila está vazia\n");
    }
    return remover;

}

void listar(No *queue){
    printf("Os valores da lista: \n");
    while (queue != NULL)
    {
        printf("%d\n", queue->dado);
        queue = queue->proximo;
    }
    
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    No *remover,*queue = NULL;
    int op;
    do {
        printf("0 - ENCERRAR\n1 - ENFILEIRAR\n2 - DESENFILEIRAR\n3 - LISTAR\n");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            enqueue(&queue);
            break;
        case 2:
            remover = dequeue(&queue);
            if(remover){
                printf("O valor %d foi removido com sucesso", remover->dado);            
            } else {
                printf("Não há nó para remover\n");
            }
            
            break;
        case 3:
            listar(queue);

            break;
        
        default:
            if(op != 0){
                printf("Essa opção é inválida!!!\n");
            }
            break;
        }

    } while(op != 0);

    return 0;
}