#include <stdio.h>
#include <stdlib.h>

// Nó da pilha
typedef struct No {
    int valor;
    struct No* proximo;
} No;

// Pilha (Stack)
typedef struct {
    No* topo;
    int tamanho;
} TStack;

// Cria uma nova pilha vazia
TStack* criar_pilha() {
    TStack* pilha = (TStack*)malloc(sizeof(TStack));
    if (pilha == NULL) {
        printf("Erro de alocação da pilha!\n");
        exit(1);
    }
    pilha->topo = NULL;
    pilha->tamanho = 0;
    return pilha;
}

// Cria um novo nó
No* criar_no(int valor, No* proximo) {
    No* novo_no = (No*)malloc(sizeof(No));
    if (novo_no == NULL) {
        printf("Erro de alocação de nó!\n");
        exit(1);
    }
    novo_no->valor = valor;
    novo_no->proximo = proximo;
    return novo_no;
}

// Empilha (push)
void push(TStack* pilha, int valor) {
    pilha->topo = criar_no(valor, pilha->topo);
    pilha->tamanho++;
}

// Desempilha (pop)
int pop(TStack* pilha) {
    if (pilha->topo == NULL) {
        printf("Pilha vazia!\n");
        exit(1);
    }
    int valor = pilha->topo->valor;
    No* temp = pilha->topo;
    pilha->topo = pilha->topo->proximo;
    free(temp);
    pilha->tamanho--;
    return valor;
}

// Olha o topo (peek)
int peek(TStack* pilha) {
    if (pilha->topo == NULL) {
        printf("Pilha vazia!\n");
        exit(1);
    }
    return pilha->topo->valor;
}

// Verifica se está vazia
int is_empty(TStack* pilha) {
    return pilha->tamanho == 0;
}

// Retorna o tamanho da pilha
int size(TStack* pilha) {
    return pilha->tamanho;
}

// Libera toda a memória da pilha
void liberar_pilha(TStack* pilha) {
    while (pilha->topo != NULL) {
        No* temp = pilha->topo;
        pilha->topo = pilha->topo->proximo;
        free(temp);
    }
    free(pilha);
}
