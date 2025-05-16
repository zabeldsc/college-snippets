#include "../include/lista.hpp"

/* Escreva funções, em C, que recebam uma lista simplesmente encadeada
ordenada, e realizem as seguintes operações:
a. retirar todos os elementos ímpares que são primos, e, gerar uma
outra lista contendo apenas os elementos retirados da lista inicial,
em ordem decrescente;
b. retirar todos os elementos pares da lista inicial.
OBS.: utilize o tipo Nodo criado em aula. */

NodoInt *retirarPrimos(NodoInt *inicio)
{
    NodoInt *atual = inicio;
    NodoInt *primos = nullptr;
    NodoInt *anteriorAtual = nullptr;

    while (atual != nullptr) 
    {
        if (ehPrimo(atual->info)) /* Se atual for prima */
        {
            if(atual == inicio)
            {
                inicio = inicio->prox;
            }
            else
            {
                anteriorAtual->prox = atual->prox;
            }

            if(primos == nullptr) /* Se a lista de primos estiver vazia, primos recebe apenas info */
            {
                primos = new NodoInt();
                primos->info = atual->info;
            }
            else
            {
                NodoInt *atualPrimo = primos; 
                NodoInt *anterior = primos;

                while(atualPrimo != nullptr)
                {
                    if (atual->info < atualPrimo->info)
                    {
                        anterior->prox = atual;
                        atual->prox = atualPrimo;
                        break;
                    }

                    atualPrimo = atualPrimo->prox;
                    if(atualPrimo == nullptr)
                        anterior->prox = atual;
                }
            }
        }

        anteriorAtual = atual;
        atual = atual->prox;
    }

    return primos;
}

bool ehPrimo(int valor)
{
    for (int x = 3; x < valor; x++)
    {
        if (valor % x == 0)
            return false;
    }

    return true;
}