#include <lista-circular.hpp>

void ListaCircular::editarPalavra()
{
}

void ListaCircular::inserirPalavra()
{
    Nodo *novo = new Nodo();
    string palavra;

    if (novo == nullptr)
        return;

    cout << "Insira a palavra que deseja inserir: ";
    cin >> palavra;
    novo->info = palavra;

    if (inicio == nullptr)
    {
        novo->prox = inicio;
        novo->ant = inicio;
        inicio = novo;
        fim = novo;
    }
    else
    {
        novo->ant = fim;
        novo->prox = inicio;
        fim->prox = novo;
        inicio->ant = novo;
        fim = novo;
    }

    atual = novo;
}

void ListaCircular::eliminarPalavra()
{
}

void ListaCircular::palavraAnterior()
{
}

void ListaCircular::palavraPosterior()
{
}

void ListaCircular::mostrarMenu(ListaCircular listaCircular)
{
    cout << "Estruturas Dados I\n\nPalavra atual: " << (listaCircular.atual != nullptr ? listaCircular.atual->info : "[Nenhuma]") << "\n\nE: Editar palavra atual\nD: Inserir (depois da palavra atual)\nS: Eliminar palavra\n<: Palavra anterior\n>: Palavra posterior\nX: Sair\n\nDigite sua opção: ";
}

int main()
{
    ListaCircular listaCircular;
    char resposta = '\0';

    while (resposta != 'X')
    {
        listaCircular.mostrarMenu(listaCircular);
        cin >> resposta;

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
        default:
            cout << "Opção inválida!" << endl;
            break;
        }
    }
}