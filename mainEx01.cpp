#include <iostream>
#include <cstring>

using namespace std;

struct Computador {
    char marca[30];
    char modelo[30];
    float preco;
};

int main() {
    Computador pc;
    Computador* ptr = &pc;
    
    // Atribuindo valores via ponteiro
    strcpy(ptr->marca, "Dell");
    strcpy(ptr->modelo, "Inspiron 15");
    ptr->preco = 4500;
    
    // Exibindo os valores
    cout << "Marca: " << ptr->marca << endl;
    cout << "Modelo: " << ptr->modelo << endl;
    cout << "Preco: R$" << ptr->preco << endl;
    
    return 0;
}


