#ifndef CORREO_H
#define CORREO_H

#include "MensajeCorreo.h"

class Correo
{
    public:
        Correo();
        Correo(char *, char *, char *, char *, char *, char *);
        virtual ~Correo();

        void setCorreoElectronico(char *);
        void setNombre(char *);
        void setMensajesEnviados(char *, char *, char *, char *);

        char *getCorreoElectronico();
        char *getNombre();
        MensajeCorreo *getMensajesEnviados();

        void enviarMensajes(char *, char *, char *, char *);
        void mostrarMensajesEnviados();

    protected:

    private:
        char * correoElectronico;
        char *nombre;

        MensajeCorreo *mensajesEnviados;
};

#endif // CORREO_H
