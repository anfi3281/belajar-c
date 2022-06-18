// --------------------------------------------------------------
// Contoh pemberian nilai awal terhadap array
// --------------------------------------------------------------


#include <stdio.h>

int main()
{
    int jum_hari[13] =
    {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };

    // Tampilkan isinya
    int kode_bulan;
    for (kode_bulan = 1; kode_bulan <= 12; kode_bulan++)
    {
        printf("jum_hari[%d] = %d\n", kode_bulan, jum_hari[kode_bulan]);
    }

    return 0;
}
