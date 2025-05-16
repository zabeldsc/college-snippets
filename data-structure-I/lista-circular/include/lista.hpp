#include <iostream>
#include <string.h>
#include <limits>

using namespace std;

struct NodoString
{
    string info;
    struct NodoString *ant, *prox;
};

class ListaCircular
{
private:
public:
    NodoString *inicio;
    NodoString *fim;
    NodoString *atual;
    ListaCircular()
    {
        inicio = nullptr;
        fim = nullptr;
        atual = nullptr;
    }

    /* Funções que utilizo na listaCircular de palavras! */
    void imprimirTexto();
    void editarPalavra();
    void inserirPalavra();
    void eliminarPalavra();
    void palavraAnterior();
    void palavraPosterior();
    void mostrarMenu();
};

struct NodoInt
{
    int info;
    struct NodoInt *ant, *prox;
};

class ListaSimples
{
private:
public:
    NodoInt *atual;
    NodoInt *inicio;

    ListaSimples()
    {
        atual = nullptr;
        inicio = nullptr;
    }

    void inserirNumero(int numero);
    void listar();
    ListaSimples retirarPrimos();
};