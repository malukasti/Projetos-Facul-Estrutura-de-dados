#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int dado;
    struct No * proximo;
}TNo;

typedef struct{
    int tamanho;
    struct No * inicio;
}TLLSE;

typedef struct{
    
}TDados;

//Criar No
TNo* criarNoLLSE(int elemento){
    TNo *no = (TNo*)malloc(sizeof(TNo));
    if(no == NULL) return NULL;
    no->dado = elemento;
    no->proximo = NULL;
    return no;
}
// inicializar LLSE
void inicializarLLSE(TLLSE * const lista){
    lista->inicio = NULL;
    lista->tamanho = 0;
}
// verifica se ta vazio
int estaVazia(TLLSE const * const lista){
    return (lista->inicio == NULL);
}
// insere no final da lista
int inserirFimLLSE(TLLSE * const lista, int elemento){
    TNo *pNO = criarNoLLSE(elemento);
    if(pNO == NULL) return 0;
    if(estaVazia(lista)){
        lista->inicio = pNO;
        lista->tamanho++;
        return 1;
    }
    TNo *pAux = lista->inicio;
    while (pAux->proximo!=NULL)
    {
        pAux = pAux->proximo;
    }
    pAux->proximo = pNO;
    lista->tamanho++;
    return 1;
}
// insere um elemento no inicio da lista
int inserirInicioLLSE(TLLSE * const lista, int elemento){
    TNo *pNO = criarNoLLSE(elemento);
    if(pNO == NULL) return 0;
    pNO->proximo = lista->inicio;
    lista->inicio = pNO;
    lista->tamanho++;
    return 1;
}
// retira do fim da lista
int retirarfimLLSE(TLLSE * const lista){
    if(estaVazia(lista)){
        printf("Lista Vazia!");
        return 0;
    }
    if(lista->tamanho == 1){
        free(lista->inicio);
        lista->inicio = NULL;
        lista->tamanho=0;
        return 1;
    }
    TNo *pAux = lista->inicio;
    while (pAux->proximo->proximo != NULL)
    {
        pAux = pAux->proximo;
    }
    free(pAux->proximo);
    pAux->proximo = NULL;
    lista->tamanho--;
    return 1;
}
// retira um elemento do inicio da lista
int retirarInicioLLSE(TLLSE * const lista){
    if(estaVazia(lista)) return 0;
    TNo *paux = lista->inicio;
    lista->inicio = paux->proximo;
    free(paux);
    lista->tamanho--;
    return 1;
}
// acessa final da lista
int acessarFimLLSE(TLLSE const * const lista){
    if(estaVazia(lista)){
        printf("Lista esta vazia!");
        return 0;
    }
    TNo *pAux = lista->inicio;
    while (pAux->proximo != NULL)
    {
        pAux = pAux->proximo;
    }
    return pAux->dado;
    
}
// acessa alguma posição na lista
int acessarInicioLLSE(TLLSE const * const lista){
    if(estaVazia(lista)){ 
        printf("Lista Vazia!"); 
        return 0; 
    }
    return lista->inicio->dado;
}

// libera a LLSE
void liberarLLSE(TLLSE * const lista){
    TNo *pNo = lista->inicio;
    while(pNo != NULL){
        TNo *temp = pNo;
        pNo = pNo->proximo;
        free(temp);
    }
}
// printa lista
char* imprimirLLSE(TLLSE const* const lista) {
    static char resultado[1024];
    int pos = 0;
    
    if (estaVazia(lista)) {
        snprintf(resultado, sizeof(resultado), "LLSE={∅}");
    } else {
        TNo* pNo = lista->inicio;
        pos += snprintf(resultado + pos, sizeof(resultado) - pos, "LLSE={");
        
        while (pNo != NULL) {
            pos += snprintf(resultado + pos, sizeof(resultado) - pos, "%d", pNo->dado);
            if (pNo->proximo != NULL) {
                pos += snprintf(resultado + pos, sizeof(resultado) - pos, ",");
            }
            pNo = pNo->proximo;
        }
        snprintf(resultado + pos, sizeof(resultado) - pos, "}");
    }
    
    return resultado;
}