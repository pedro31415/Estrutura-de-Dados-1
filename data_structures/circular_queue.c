#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define tam 5

int circular_queue[tam];
int front = -1, rear = -1;


int isFull(){
    if((front == rear + 1) || (front == 0 && rear == tam)){
        return 1;
    }
    return 0;
}

int isEmpty(){
    if(front == -1){
        return 1;
    }
    return 0;
}

void enqueue(int valor){
    if(isFull()){
        printf("A pilha está cheia!\n");
    } else {
        if(front == -1){
            front = 0;
        }
        rear = (rear+1)%tam;
        circular_queue[rear] = valor;
    }

}

int dequeue(){
    int valor;
    if(isEmpty()){
        printf("A fila circular se encontra vazia!\n");
        return -1;
    } else {
        valor = circular_queue[front];
        if(front == rear){
            front = -1;
            rear = -1;
        } else {
            front = (front+1)%tam;
        }
        return valor;
    }

}

void imprimir() {
    if (isEmpty()) {
        printf("A fila circular está vazia!\n");
    } else {
        int i = front;
        int count = 0;
        while (count < tam) {
            printf("%d\n", circular_queue[i]);
            i = (i + 1) % tam;
            count++;
            if (i == (rear + 1) % tam) {
                break;
            }
        }
    }
}

int busca_linear(int key){
    int i;
    if(isEmpty()){
        printf("A fila está vazia!\n");
        return -1;
    }
    for(i = front; i != (rear + 1) % tam; i = (i + 1) % tam){
        if(circular_queue[i]==key){
            return i;
        }
    }
    return -1;
}

int main(){
    setlocale(LC_ALL,"Portuguese");
    int op,valor,removido,posicao,chave;
    do {
        printf("0 - ENCERRAR\n1 - INSERIR\n2 - REMOVER\n3 - LISTAR\n4 - BUSCAR ELEMENTO\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Informe o valor que você deseja inserir: ");
            scanf("%d", &valor);
            enqueue(valor);
            break;
        case 2:
            removido = dequeue();
            printf("O valor %d, foi removido com sucesso", removido);          
            break;
        case 3:
            imprimir();
            break;
        case 4:
            printf("Informe o valor que você deseja buscar: ");
            scanf("%d", &chave);
            posicao = busca_linear(chave);
            
            if(posicao == -1){
                printf("O valor %d não foi encontrado pois a fila está vazia ou não existe esse elemento", chave);
            } else {
                printf("Valor %d foi encontrado na posição %d",chave, posicao);
            }
        default:
            if(op != 0){
                printf("Está opção é invalida!\n");
            }
            break;
        }

    } while(op!=0);

    return 0;
}