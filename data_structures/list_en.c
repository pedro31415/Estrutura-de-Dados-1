#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

typedef struct no{
    int dado;
    struct no *proximo;
}No;

void add_i(No **list, int num){
    No *novo = malloc(sizeof(No));
    if(novo!=NULL){
        novo->dado = num;
        novo->proximo = *list;
        *list = novo;

    } else {
        printf("Erro ao alocar memória!!!\n");
    }

}

void add_end(No **list, int num){
    No *aux,*novo= malloc(sizeof(No));
    if(novo != NULL){
        novo->dado = num;
        novo->proximo = *list;
        if(*list == NULL){
            *list = novo;
        } else {
            aux = *list;
            while (aux->proximo != NULL)
            {
                aux = aux->proximo;
            }
            aux->proximo = novo;
        }

    } else {
        printf("Erro ao alocar memória!!!\n");
    }
}

void add_mid(No **list, int num, int ant){
    No *aux,*novo = malloc(sizeof(No));
    if(novo!=NULL){
        novo->dado = num;
        novo->proximo = *list;
        if(*list == NULL){
            novo->proximo = NULL;
            *list = novo;
        } else {
            aux = *list;
            while((aux->dado!=ant )&& (aux->proximo != NULL)){
                aux = aux->proximo;
            }
            novo->proximo = aux->proximo;
            aux->proximo = novo;
        }
    } else {
        printf("Erro ao alocar memória!!!\n");
    }
}

No *remover(No **list, int num){
    No *aux,*remover = NULL;
    if(*list != NULL){
        if((*list)->dado == num){
            remover = *list;
            *list = remover->proximo;
        } else {
            aux = *list;
            while((aux->proximo) && (aux->proximo != num)){
                aux = aux->proximo;
            }
            if(aux->proximo != NULL){
                remover = aux->proximo;
                aux->proximo = remover->proximo;
            }
        }
    }
    return remover;
}

void imprimir(No *no){
    printf("LISTA: \n");
    while(no != NULL){
        printf(" %d\n", no->dado);
        no = no->proximo;
    }
    printf("\n\n");
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    No *remove,*list = NULL;
    int ant,valor,op,op2;
    do {
        printf("\n0 - ENCERRAR\n1 - ADICIONAR\n2 - REMOVER\n3 - LISTAR\n");
        scanf("%d", &op);
        switch(op){
            case 1:
                printf("Informe o valor que você deseja inserir: ");
                scanf("%d", &valor);
                printf("\nEscolha a forma que você deseja adicionar o elemento\n 1-ADD NO INICIO\n2 - ADD NO FINAL \n3 - ADD NO MEIO: ");
                scanf("%d", &op2);
                switch (op2)
                {
                case 1:
                add_i(&list,valor);    
                    break;
                case 2:
                add_end(&list,valor);
                    break;
                case 3:
                printf("Informe o valor que você deseja adicionar na frente do elemento: \n");
                scanf("%d", &ant);
                add_mid(&list,valor,ant);
                
                default:
                    break;
                }
                break;
                case 2:
                printf("Digite um valor a ser removido");
                scanf("%d", &valor);
                remove = remover(&list,valor);
                if(remove){
                    printf("Elemento a ser removido: %d\n", remove->dado);
                    free(remove);
                }
                break;
                case 3:
                imprimir(list);
                break;
                default:
                if(op!= 0){
                    printf("O Valor informado é inválido!!!\n");
                }

        }
    } while(op!=0);


    return 0;
}