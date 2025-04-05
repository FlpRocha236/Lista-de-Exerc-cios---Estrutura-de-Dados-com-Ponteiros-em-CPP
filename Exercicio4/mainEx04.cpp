#include <iostream>
#include <stdlib.h> 

using namespace std;

struct No {
    int dado;
    No* proximo;
};

// Insere elemento no início da lista
void inserirInicio(No*& cabeca, int valor) {
    No* novo = new No;
    novo->dado = valor;
    novo->proximo = cabeca;
    cabeca = novo;
}

// Exibe os elementos da lista
void exibirLista(No* cabeca) {
    No* atual = cabeca;
    while (atual != NULL) {
        cout << atual->dado << " -> ";
        atual = atual->proximo;
    }
    cout << "NULL" << endl;
}

int main() {
    No* lista = NULL;

    inserirInicio(lista, 30);
    inserirInicio(lista, 20);
    inserirInicio(lista, 10);

    cout << "Lista ligada: ";
    exibirLista(lista);

    return 0;
}

