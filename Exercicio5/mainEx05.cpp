#include <iostream>
#include <cstring>
#include <stdlib.h> // Para NULL, caso necess�rio

using namespace std;

struct Aluno {
    char nome[50];
    float nota;
};

int main() {
    Aluno* aluno = new Aluno; // aloca��o din�mica

    cout << "Digite o nome do aluno: ";
    cin.getline(aluno->nome, 50);

    cout << "Digite a nota do aluno: ";
    cin >> aluno->nota;

    cout << "\nDados do aluno:\n";
    cout << "Nome: " << aluno->nome << endl;
    cout << "Nota: " << aluno->nota << endl;

    delete aluno; // libera mem�ria

    return 0;
}

