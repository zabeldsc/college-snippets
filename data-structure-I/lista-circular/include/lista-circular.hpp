#include <iostream>
#include <string.h>

using namespace std;

struct Nodo
{
    string info;
    struct Nodo * ant, * prox;
};

class ListaCircular
{
    private:
    public:
    Nodo * inicio;
    Nodo * fim;
    Nodo * atual;
    ListaCircular()
    {
        inicio = nullptr;
        fim = nullptr;
        atual = nullptr;
    }

    void editarPalavra();
    void inserirPalavra();
    void eliminarPalavra();
    void palavraAnterior();
    void palavraPosterior();
    void mostrarMenu(ListaCircular listaCircular);
};

// Estruturas Dados I
// Palavra atual: Estrutura
// E: Editar palavra atual
//  D: Inserir (depois da palavra atual)
// S: Eliminar palavra
// <: Palavra anterior
// >: Palavra posterior
// X: Sair
// Digite sua opçao:
