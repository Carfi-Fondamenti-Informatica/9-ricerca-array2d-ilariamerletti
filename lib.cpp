#include <iostream>
#include "lib.h"
using namespace std;
void inserimento(char mat[10][20]){
    for(int i=0; i<10;i++){
        cin >> mat[i];
    }
}
void inserimento(char nome[20]){
    cin >>nome;
}
bool strcmp(char string1[20], char string2[20]){
    int lenght1=0;
    int lenght2=0;
    while(lenght1<20){
        if (string1[lenght1]== '\0'){
            break;
        }
        lenght1++;
    }
    while(lenght2<20){
        if (string2[lenght2]== '\0'){
            break;
        }
        lenght2++;
    }
    if (lenght1 != lenght2){
        return false;
    }
    for(int i=0; i< lenght1; i++){
        if(string1[i] != string2[i]){
            return false;
        }
    }
    return true;
}
int confronto(char mat[10][20], char nome[20]){
    int i=0;
    while(i<10){
        if (strcmp(mat[i],nome)){
            return i;
        }
        i++;
    }
    return 0;

}

