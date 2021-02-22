#include "api.h"

int main()
{
    Arv *a = arv_criavazia();

    srand(time(NULL));

    for (int i = 0; i < 10000000; i++)
        a = insere(a, rand() % 10000000);

    clock_t start_preorder = clock();
    rec_preorder(a, printChave);
    clock_t end_preorder = clock();
    double seconds_preorder = ((double)end_preorder - start_preorder) / CLOCKS_PER_SEC;
    printf("Tempo stack preorder: %lf \n", seconds_preorder);
    //printf("\n");

    clock_t start_inorder = clock();
    rec_inorder(a, printChave);
    //printf("\n");
    clock_t end_inorder = clock();
    double seconds_inorder = ((double)end_inorder - start_inorder) / CLOCKS_PER_SEC;
    printf("Tempo stack inorder: %lf \n", seconds_inorder);

    // rec_postorder(a, printChave);
    // printf("\n");

    arv_libera(a);
    return 0;
}