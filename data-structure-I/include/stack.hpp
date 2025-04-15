struct Nodo
{
    int info;
    struct Nodo *prox;
};

class PilhaDinamica
{
private:
    Nodo *topo;

public:
    PilhaDinamica();

    Nodo * getNodo();

    void empilhar(int n);

    int desempilhar();

    void listar();
};