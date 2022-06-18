// -----------------------------------------
// Menggunakan abjad A sampai dengan Z
//  menggunakan for
// -----------------------------------------

#include <stdio.h>

int main()
{
    char abjad;

    abjad = 'A';

    for (abjad = 'A'; abjad <= 'Z'; abjad++)
        printf("%c", abjad);

    printf("\n");// Pindah baris

    return 0;
}
