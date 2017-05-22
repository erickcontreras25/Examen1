#include "MensajeCorreo.h"
#include <iostream>
#include <cstring>

using namespace std;

MensajeCorreo::MensajeCorreo()
{
    //ctor
    this->para = new char[30];
    strcpy(this->para,"Erick");
    this->cc = new char[30];
    strcpy(this->cc,"Alejandro");
    this->asunto = new char[30];
    strcpy(this->asunto,"Examen 1");
    this->mensaje = new char[30];
    strcpy(this->mensaje,"Este es el ejercicio de clase");

    cout << "Constructor 1 de MensajeCorreo" << endl;
}

MensajeCorreo::MensajeCorreo(char *a, char *copia, char *dice, char *conte)
{
    this->para = new char[strlen(a)+1];
    strcpy(this->para,a);
    this->cc = new char[strlen(copia)+1];
    strcpy(this->cc,copia);
    this->asunto = new char[strlen(dice)+1];
    strcpy(this->asunto,dice);
    this->mensaje = new char[strlen(conte)+1];
    strcpy(this->mensaje,conte);

    cout << "Constructor 2 de MensajeCorreo" << endl;
}
MensajeCorreo::~MensajeCorreo()
{
    //dtor
    delete [] this->para;
    delete [] this->cc;
    delete [] this->asunto;
    delete [] this->mensaje;
    cout << "Destructor de MensajeCorreo" << endl;
}

void MensajeCorreo::setPara(char *a)
{
    delete [] this->para;
    this->para = new char[strlen(a)+1];
    strcpy(this->para,a);
}
void MensajeCorreo::setCc(char *copia)
{
    delete [] this->cc;
    this->cc = new char[strlen(copia)+1];
    strcpy(this->cc,copia);
}
void MensajeCorreo::setAsunto(char *dice)
{
    delete [] this->asunto;
    this->asunto = new char[strlen(dice)+1];
    strcpy(this->asunto,dice);
}
void MensajeCorreo::setMensaje(char *conte)
{
    delete [] this->mensaje;
    this->mensaje = new char[strlen(conte)+1];
    strcpy(this->mensaje,conte);
}

char * MensajeCorreo::getPara()
{
    return this->para;
}
char * MensajeCorreo::getCc()
{
    return this->cc;
}
char * MensajeCorreo::getAsunto()
{
    return this->asunto;
}
char * MensajeCorreo::getMensaje()
{
    return this->mensaje;
}

void MensajeCorreo::mostrarMensaje()
{
    cout << "Mensaje: " << this->mensaje << endl;
}
