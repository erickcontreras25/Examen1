#include <iostream>
#include "MensajeCorreo.h"
#include "Correo.h"

using namespace std;

int main()
{
    Correo *correo1[2];
    char correo[20];
    char nombre[10];
    char para[20];
    char cc[30];
    char asunto[40];
    char mensaje[50];

    for(int i=0; i<2; i++)
    {
        cout << "Ingrese su correo: ";
        cin.getline(correo,20);
        cout << endl;
        cout << "Ingrese su nombre: ";
        cin.getline(nombre,10);
        cout << endl;
        cout << "Para: ";
        cin.getline(para,20);
        cout << endl;
        cout << "cc: ";
        cin.getline(cc,30);
        cout << endl;
        cout << "Asunto: ";
        cin.getline(asunto,40);
        cout << endl;
        cout << "Mensaje: ";
        cin.getline(mensaje,50);
        cout << endl;
        correo1[i] = new Correo(correo, nombre, para, cc, asunto, mensaje);
        cout << endl << endl;

    }
    for(int i=0; i<2; i++)
    {
        correo1[i]->mostrarMensajesEnviados();
        cout << endl;
    }

    delete correo1;
    return 0;
}
