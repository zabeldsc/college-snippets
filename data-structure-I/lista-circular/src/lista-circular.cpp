#include "../include/lista.hpp"

void ListaCircular::imprimirTexto()
{
    if (inicio == nullptr)
        return;

    NodoString *percorrer = inicio;
    do
    {
        std::cout << percorrer->info << " ";
        percorrer = percorrer->prox;
    } while (percorrer != inicio);
}

void ListaCircular::editarPalavra()
{
    if (atual == nullptr)
        return;

    string palavra;

    cout << "Insira a palavra editada: ";
    cin >> palavra;
    atual->info = palavra;
}

void ListaCircular::inserirPalavra()
{
    NodoString *novo = new NodoString();
    string palavra;

    if (novo == nullptr)
        return;

    cout << "Insira a palavra que deseja inserir: ";
    cin >> palavra;
    novo->info = palavra;

    if (inicio == nullptr)
    {
        novo->prox = novo;
        novo->ant = novo;
        inicio = novo;
        fim = novo;
    }
    else
    {
        if (atual == nullptr)
            cout << "SOMETHING IS WRONG";

        novo->ant = atual;
        novo->prox = atual->prox;
        atual->prox->ant = novo;
        atual->prox = novo;
    }

    if (atual == fim)
        fim = novo;

    atual = novo;
}

void ListaCircular::eliminarPalavra()
{
    if (atual == nullptr)
        return;

    NodoString *aux = atual;

    if (atual == inicio && atual == fim)
    {
        atual = nullptr;
        inicio = nullptr;
        fim = nullptr;
    }
    else if (atual == fim)
    {
        fim = fim->ant;
        fim->prox = inicio;
        inicio->ant = fim;
        atual = fim;
    }
    else if (atual == inicio)
    {
        inicio = inicio->prox;
        inicio->ant = fim;
        fim->prox = inicio;
        atual = inicio;
    }
    else
    {
        atual->ant->prox = atual->prox;
        atual->prox->ant = atual->ant;
        atual = atual->ant;
    }

    delete (aux);
}

void ListaCircular::palavraAnterior()
{
    if (atual == nullptr)
        return;

    atual = atual->ant;
}

void ListaCircular::palavraPosterior()
{
    if (atual == nullptr)
        return;

    atual = atual->prox;
}

void ListaCircular::mostrarMenu()
{
    cout << "Frase atual: ";
    imprimirTexto();
    cout << "\nEstruturas Dados I\n\nPalavra atual: " << (this->atual != nullptr ? this->atual->info : "[Nenhuma]") << "\n\nE: Editar palavra atual\nD: Inserir (depois da palavra atual)\nS: Eliminar palavra\n<: Palavra anterior\n>: Palavra posterior\nX: Sair\n\nDigite sua opção: ";
}

int main()
{
    ListaCircular listaCircular;
    char resposta = '\0';

    while (true)
    {
        listaCircular.mostrarMenu();
        cin >> resposta;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (toupper(resposta))
        {
        case 'E':
            listaCircular.editarPalavra();
            break;
        case 'D':
            listaCircular.inserirPalavra();
            break;
        case 'S':
            listaCircular.eliminarPalavra();
            break;
        case '<':
            listaCircular.palavraAnterior();
            break;
        case '>':
            listaCircular.palavraPosterior();
            break;
        case 'X':
            exit(0);
        default:
            cout << "Opção inválida!" << endl;
            break;
        }
    }
}