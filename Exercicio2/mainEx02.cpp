#include <iostream>
#include <cstring>

using namespace std;

struct Carro {
    char marca[20];
    int ano;
};

void alterarAno(Carro* c, int novoAno) {
    c->ano = novoAno;
}

int main() {
    Carro meuCarro;
    strcpy(meuCarro.marca, "Toyota");
    meuCarro.ano = 2015;
    
    cout << "Antes da alteracao: " << meuCarro.marca << " - " << meuCarro.ano << endl;
    
    alterarAno(&meuCarro, 2022);
    
    cout << "Depois da alteracao: " << meuCarro.marca << " - " << meuCarro.ano << endl;
    
    return 0;
}

