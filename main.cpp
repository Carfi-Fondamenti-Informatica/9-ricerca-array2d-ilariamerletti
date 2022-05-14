#include <iostream>
using namespace std;
#include "lib.h";
int main() {
    char mat[10][20];
    char nome[20];
    cout << "inserire 10 nomi"<< endl;
    inserimento(mat);
    cout << "inserire nome da cercare"<< endl;
    inserimento(nome);
    cout << endl;
    cout << "il nome si trova in posizione:  ";
    cout<< confronto(mat,nome);
    return 0;
}
