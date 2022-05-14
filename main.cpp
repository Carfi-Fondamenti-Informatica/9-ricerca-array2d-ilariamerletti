#include <iostream>
using namespace std;
#include "lib.h";
int main() {
    char mat[10][20];
    char nome[20];
    inserimento(mat);
    inserimento(nome);
    cout << endl;
    cout<< confronto(mat,nome);
    return 0;
}
