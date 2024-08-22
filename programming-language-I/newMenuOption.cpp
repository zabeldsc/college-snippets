// Faça um programa que implemente um menu onde o usurário deverá selecionar 1 ou 0. Caso seja entrado um número diferente, o programa deverá solicitar uma nova opção. [Marcelo Cendron, IFC]SPSAAF
#include <stdio.h>

int main()
{
    // // Opções do menu, contador que adiciona nova opção e contador que compara a escolha com as opções.
    // int options[100] = {0, 1};
    // int i = 2;
    // int j = 2;

    // printf("Menu:\n1\n0\n\nEscolha: ");
    // scanf("%d", &options[i]);

    // for (int x = 0; x < i; x++)
    // {
    //     // Se alguma das casas anteriores for igual a casa atual, encerra o loop.
    //     if (options[x] == options[i])
    //     {
    //         break;
    //         // Se x for a última casa antecessor a i, adiciona as demais opções.
    //     }
    //     else if (x == i - 1)
    //     {
    //         printf("\nSelecione:\n1\n0");
    //         while (j > 1)
    //         {
    //             printf("\n%d", options[j]);
    //             j--;
    //         }
    //         printf("\n\nEscolha: ");
    //         i++;
    //         scanf("%d", &options[i]);
    //         j = i;
    //         x = 0;
    //     }
    // }

    int select = 2;

    while ((select != 0) && (select != 1))
    {
        printf("Menu:\n1\n0\n\nEscolha: ");
        scanf("%d", &select);
    }

    return 0;
}