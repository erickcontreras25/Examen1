#include <iostream>

using namespace std;

int contar(char *c)
{
    int i;
    for(i=0; *c!='\0'; c++)
        i++;

    return i;
}

int main()
{
    char cadena[20];

    cout << "Ingrese una cadena: ";
    cin >> cadena;
    cout << contar(cadena) << endl;

    return 0;
}
