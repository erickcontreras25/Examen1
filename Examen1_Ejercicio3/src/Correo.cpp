#include "Correo.h"
#include <cstring>
#include <iostream>

using namespace std;

Correo::Correo()
{
    //ctor
    this->correoElectronico = new char[20];
    strcpy(this->correoElectronico,"erick@unitec.edu");
    this->nombre = new char[10];
    strcpy(this->nombre,"Guevara");

    cout << "Constructor 1 CORREO" << endl;
}

Correo::Correo(char *correo, char *nombre, char *para, char *cc, char *asunto, char *mensaje)
{
    this->correoElectronico = new char[strlen(correo)+1];
    strcpy(this->correoElectronico,correo);
    this->nombre = new char[strlen(nombre)+1];
    strcpy(this->nombre,nombre);

    this->mensajesEnviados = new MensajeCorreo(para, cc, asunto, mensaje);
    cout << "Costructor 2 CORREO" << endl;
}
Correo::~Correo()
{
    delete [] this->correoElectronico;
    delete [] this->nombre;
    delete this->mensajesEnviados;

    cout << "Destructor de  CORREO" << endl;
    //dtor
}

void Correo::setCorreoElectronico(char *correo)
{
    delete [] this->correoElectronico;
    this->correoElectronico = new char[strlen(correo)+1];
    strcpy(this->correoElectronico,correo);
}
void Correo::setNombre(char *_nombre)
{
    delete [] this->nombre;
    this->nombre = new char[strlen(_nombre)+1];
    strcpy(this->nombre,_nombre);
}
void Correo::setMensajesEnviados(char *para, char *cc, char *asunto, char *mensaje)
{
    this->mensajesEnviados->setPara(para);
    this->mensajesEnviados->setCc(cc);
    this->mensajesEnviados->setAsunto(asunto);
    this->mensajesEnviados->setMensaje(mensaje);
}

char * Correo::getCorreoElectronico()
{
    return this->correoElectronico;
}
char * Correo::getNombre()
{
    return this->nombre;
}
MensajeCorreo * Correo::getMensajesEnviados()
{
    return this->mensajesEnviados;
}

void Correo::enviarMensajes(char *para, char *cc, char *asunto, char *mensaje)
{
    this->mensajesEnviados->setPara(para);
    this->mensajesEnviados->setCc(cc);
    this->mensajesEnviados->setAsunto(asunto);
    this->mensajesEnviados->setMensaje(mensaje);
}
void Correo::mostrarMensajesEnviados()
{
    cout << "De: " << this->getCorreoElectronico() << endl;
    cout << "Nombre: " << this->nombre << endl;
    cout << "Para: " << this->mensajesEnviados->getPara() << endl;
    cout << "Cc: " << this->mensajesEnviados->getCc() << endl;
    cout << "Asunto: " << this->mensajesEnviados->getAsunto() << endl;
    cout << "Mensaje: " << this->mensajesEnviados->getMensaje() << endl;
}
