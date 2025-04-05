#include <iostream>
#include <cstring>

using namespace std;

struct Produto {
    char nome[30];
    float preco;
};

int main() {
    Produto produtos[3] = {
        {"Teclado", 120.50},
        {"Mouse", 65.00},
        {"Monitor", 999.99}
    };

    Produto* ptr = produtos; // ponteiro para o primeiro elemento

    for (int i = 0; i < 3; ++i) {
        cout << "Produto " << i + 1 << ":\n";
        cout << "Nome: " << (ptr + i)->nome << endl;
        cout << "Preco: R$" << (ptr + i)->preco << endl;
        cout << endl;
    }

    return 0;
}

