#include <iostream>
using namespace std;
#include "lib.h";
int main() {
    char mat[10][20];
    char nome[20];
    inserimento(mat);
    inserimento(nome);
    if(confronto(mat,nome) == 0) {
        cout << "non presente";
    }
        else{
            cout << confronto(mat, nome);
        }
    }

