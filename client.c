#include "api.h"

int main()
{
    Arv *a = arv_criavazia();

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
        a = insere(a, rand() % 100);

    rec_preorder(a, printChave);
    printf("\n");

    rec_inorder(a, printChave);
    printf("\n");

    rec_postorder(a, printChave);
    printf("\n");

    arv_libera(a);
    return 0;
}