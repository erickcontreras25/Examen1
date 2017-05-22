#ifndef MENSAJECORREO_H
#define MENSAJECORREO_H


class MensajeCorreo
{
    public:
        MensajeCorreo();
        MensajeCorreo(char *, char *, char *, char *);
        virtual ~MensajeCorreo();

        void setPara(char *);
        void setCc(char *);
        void setAsunto(char *);
        void setMensaje(char *);

        char *getPara();
        char *getCc();
        char *getAsunto();
        char *getMensaje();

        void mostrarMensaje();

    protected:

    private:
        char *para;
        char *cc;
        char *asunto;
        char *mensaje;
};

#endif // MENSAJECORREO_H
