// ------------------------------------------------------
// Menampilkan abjad A sampai dengan Z
//  menggunakan do..while
// ------------------------------------------------------

#include <stdio.h>

int main()
{
    char abjad;

    abjad = 'A';

    do{
        printf("%c",abjad);

        abjad++;
    } while (abjad <= 'Z');

    printf("\n");// Pindah baris

    return 0;
}
