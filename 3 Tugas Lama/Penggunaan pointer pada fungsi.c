// ---------------------
// Penggunaan pointer pada fungsi
// ---------------------

#include <stdio.h>

void ubah_nilai(int *pinokio);

int main()
{
    int pinokio = 80;
    printf("Nilai pinokio semula = %d\n", pinokio);

    ubah_nilai(&pinokio);
    printf("Nilai pinokio sekarang = %d\n", pinokio);

    return 0;
}

void ubah_nilai(int *x)
{
    *x = 95;
}
