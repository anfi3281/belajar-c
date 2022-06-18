// -------------------------------------
// Contoh pembangkitan bilangan acak yang bersifat tetap
// -------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main()
{
    srand(10);// Benih bilangan acak bersifat tetap

    int i;
    for(i = 0; i < 5; i++)
        printf("%d\n", rand());

    return 0;
}
