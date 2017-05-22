#include <iostream>
#include <ctype.h>
#include <stdlib.h>
#include <cstring>

#define MAX 10

using namespace std;

int main()
{
    char cadena1[MAX];
    char cadena2[MAX];

    cout << "Ingrese la primera cadena: ";
    cin >> cadena1;
    cout << endl;
    cout << "Ingrese la segunda cadena: ";
    cin >> cadena2;

    char mayus;
    char mayus2;
    char minuscula;

    int contador = 0;
    for(int i=0; i<MAX; i++)
    {
        mayus = toupper(cadena1[i]);
        minuscula = tolower(cadena1[i]);
        if(cadena1[i]==cadena2[i] || mayus==cadena2[i] || minuscula==cadena2[i])
            contador++;
    }
    if(contador==strlen(cadena1-1))
        cout << "son iguales" << endl;
    else
        cout << "son diferentes" << endl;


    return 0;
}
