#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct no{
    int dado;
    struct no *proximo;
}No;

int valor(){
    int x;
    printf("Informe o valor que você deseja empilhar: ");
    scanf("%d", &x);

    return x;
}

No *push(No *topo){
    No *novo = malloc(sizeof(No));
    if(novo!=NULL){
        novo->dado = valor();
        novo->proximo = topo;
        return novo;
    } else {
        printf("Erro ao alocar memoria\n");
    }
    return NULL;
}

No *pop(No **topo){
    if(*topo != NULL){
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    } else {
        printf("A pilha está vazia\n");
    }
    return NULL;
}

void listar(No *topo){
    printf("Valores da pilha: \n");
    while(topo != NULL){
        printf(" %d", topo->dado);
        topo = topo->proximo;
    }
    printf("\n");
}
  
int main(){
    setlocale(LC_ALL,"Portuguese");
    No *remover,*topo = NULL;
    int op;
    do {
     printf("0 - ENCERRAR\n1 - INSERIR\n2 - DESEMPILHAR\n3 - LISTAR\n");
     scanf("%d", &op);
     switch (op)
     {
     case 1:
        topo = push(topo);
        break;
     case 2:
        remover = pop(&topo);
        if(remover != NULL){
            printf("O valor %d foi removido com sucesso", remover->dado);
        } else {
            printf("Nenhum nó para remover");
        }
        break;
     case 3:
        listar(topo);
        break;
     default:
        if(op != 0){
            printf("Essa opção é inválida!!!");
        }
        break;
      }
    } while(op != 0);
   
    return 0;
}