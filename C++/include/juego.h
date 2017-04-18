#ifndef JUEGO_H
#define JUEGO_H


class juego
{
    public:
        juego();
        virtual ~juego();
        // se declaran los métodos publicos
        // Se implementan los metodos SETTER y GETTER
        void Set_NumI(int n){num = n;}
        int Get_NumI(){return num;}
        void Juego();
        void Solicitar();

    protected:

       // se declaran las variables privadas
    private:
        int num;
};

#endif // JUEGO_H
