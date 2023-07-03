#include <stdio.h>
#include <locale.h>
#define tam 5

int list[tam];

void add(int list[], int tamanho, int posicao, int info){
    if((posicao<0 )||( posicao > tamanho-1)){
        printf("Posi��o inv�lida\n");
        return;
    }
    list[posicao] = info;
}

void listar(int list[], int tamanho){
    int i;
    printf("A LISTA DE VALORES: \n\n");
    for(i=0; i<tamanho; i++){
        if(list[i]!=0){
            printf(" %d\n", list[i]);
        }
       
    }
    printf("\n");
}

int busca_linear(int list[], int tamanho, int key){
    int i;
    for(i=0; i<tamanho; i++){
        if(list[i]==key){
            return i;
        }
    }
    return -1;
}

void remover(int list[], int tamanho, int posicao){
    add(list,tamanho,posicao,0);
}

int main(){
    setlocale(LC_ALL, "Portuguese");
    int x,y,z,chave,posicao;
    while(1){
        printf("Informe o valor e a posi��o: ");
        scanf("%d%d", &x,&y);
        if(x==0){
            break;
        }
        add(list,tam,y,x);
    }
    printf("Informe a posi��o do valor que voc� deseja remover: ");
    scanf("%d", &z);
    if((z<0) ||( z>tam-1)){
        printf("O valor que voc� botou � invalido");
        return 0;
    } else {
        listar(list,tam);
        y = z;
        remover(list,tam,y);
        listar(list,tam);
    }
    printf("Informe o valor que voc� deseja buscar: ");
    scanf("%d", &chave);
    posicao = busca_linear(list,tam,chave);
    if(posicao == -1){
        printf("O valor n�o foi encontrado %d!", chave);
    } else {
        printf("O valor %d encontrada na posi��o %d", chave, posicao);
    }
    
    return 0;
}