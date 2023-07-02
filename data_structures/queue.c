#include <stdio.h>
#include <locale.h>
#define tam 5

int queue[tam];

void enqueue(int queue[], int tamanho, int info){
    int i;
    for(i=0; i<tamanho; i++){
        if(queue[i]==0){
            queue[i] = info;
            return;
    }
 }
       printf("Não pode adicionar o valor %d pois a Fila está cheia\n", info);
}

void listar(int queue[], int tamanho){
    int i;
    if(queue[0]==0){
        printf("A Fila está vazia");
        return;
    }
    for(i=0; i<tamanho; i++){
        printf(" %d\n", queue[i]);
    }
    printf("\n");
}

int busca_linear(int queue[], int tamanho, int key){
    int i;
    for(i=0; i<tamanho-1; i++){
        if(queue[i]==key){
            return i;
        }
    }
    return -1;

}

void dequeue(int queue[], int tamanho){
    int i;
    for(i=0; i<tamanho-1; i++){
        queue[i] = queue[i+1];  
    }
    queue[tamanho-1] = 0;
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int posicao,x,y;
    while(1){
        printf("Informe o valor: ");
        scanf("%d", &x);
        if(x==0){
            break;
        }
        enqueue(queue,tam,x);
    }
    listar(queue,tam);
    dequeue(queue,tam);
    listar(queue,tam);
    printf("Informe o valor que você deseja buscar: ");
    scanf("%d", &y);
    posicao = busca_linear(queue,tam,y);
    if(posicao == -1){
        printf("Chave bão encontrada");
    } else {
        printf("Chave encontrada na posição: %d", posicao);
    }

    return 0;
}