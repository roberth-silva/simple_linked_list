#include<stdio.h>

typedef struct elemento{
    int info;
    struct elemento *prox;
}Elemento;

//função para criar a lista: retorna uma lista vazia
Elemento* criar_lista(void){
    return NULL;
}

//Inserção no ínicio da lista
Elemento* inserir_no(Elemento* lista, int valor){
    Elemento * no = (Elemento*)malloc(sizeof(Elemento));
    no -> info = valor;
    no -> prox = lista;
    return no;
}

void imprimir_lista(Elemento *lista){
    Elemento *p;//declarar ponteiro auxiliar p
    for(p = lista; p != NULL; p = p -> prox){
        printf("valor: %d\n", p->info);
    }
}

int verificar_lista_vazia(Elemento *lista){
    if(lista == NULL){
        return 1;//retorna 1 se vazia e 0 senão
    }else{
        return 0;
    }
}

int main(void){
    Elemento* lista; //cria uma lista
    lista = criar_lista(); //cria e inicializa como vazia
    lista = inserir_no(lista,14);
    lista = inserir_no(lista,16);
    imprimir_lista(lista);
    return 0;
}
