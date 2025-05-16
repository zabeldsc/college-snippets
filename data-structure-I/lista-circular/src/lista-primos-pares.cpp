#include "../include/lista.hpp"

void ListaSimples::inserirNumero(int numero)
{
    NodoInt *novo = new NodoInt();
    if (novo == nullptr)
        return;

    novo->info = numero;

    if (inicio == nullptr)
    {
        inicio = novo;
    }
    else if (inicio->prox == nullptr)
    {
        inicio->prox = novo;
    }
    else
    {
        atual->prox = novo;
    }

    atual = novo;
}

void ListaSimples::listar()
{
    if (inicio == nullptr)
        return;

    NodoInt *percorrer = inicio;

    do
    {
        cout << percorrer->info << endl;
        percorrer = percorrer->prox;
    } while (percorrer != nullptr);
}

ListaSimples ListaSimples::retirarPrimos()
{
    ListaSimples primos;

    if (inicio == nullptr)
        return primos;

    NodoInt *percorrer = inicio;
    NodoInt *anterior;

    do
    {
        bool primo = true;

        for (int x = 2; x < percorrer->info; x++)
        {
            if (percorrer->info % x == 0)
                primo = false;
        }

        if (primo)
        {
            if (percorrer == inicio)
            {
                if (inicio == atual)
                    atual = inicio->prox;

                inicio = inicio->prox;
            }
            else
            {
                anterior->prox = percorrer->prox;
            }

            primos.inserirNumero(percorrer->info);
        }

        anterior = percorrer;
        percorrer = percorrer->prox;
    } while (percorrer != nullptr);

    return primos;
}

int main()
{
    ListaSimples listaInicial;
    ListaSimples listaSemPrimos;

    listaInicial.inserirNumero(10);
    listaInicial.inserirNumero(7);
    listaInicial.inserirNumero(5);
    listaInicial.listar();
    cout << "SEM PRIMOS" << endl;
    listaSemPrimos = listaInicial.retirarPrimos();
    listaInicial.listar();
    // listaSemPrimos.listar();
}