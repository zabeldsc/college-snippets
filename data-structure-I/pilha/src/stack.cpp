#include "../include/stack.hpp"
#include <iostream>
#include <stdexcept>

PilhaDinamica::PilhaDinamica()
{
    topo = nullptr;
}

Nodo *PilhaDinamica::getNodo()
{
    return this->topo;
}

void PilhaDinamica::empilhar(int n)
{
    Nodo *novo = new Nodo();
    novo->info = n;

    if (topo == nullptr)
        novo->prox = nullptr;
    else
        novo->prox = topo;

    topo = novo;
}

int PilhaDinamica::desempilhar()
{
    if (topo == nullptr)
        throw(std::underflow_error("Stack is empty"));

    Nodo *novo = topo;
    int valor = topo->info;
    topo = topo->prox;
    delete novo;

    return valor;
}

void PilhaDinamica::listar()
{
    Nodo *aux;
    for (aux = topo; aux != nullptr; aux = aux->prox)
    {
        std::cout << aux->info << std::endl;
    }
}

int main()
{
    PilhaDinamica Pilha;
    Pilha.empilhar(5);
    Pilha.desempilhar();
    Pilha.empilhar(10);
    Pilha.empilhar(13);
    Pilha.empilhar(7);
    Pilha.listar();
}