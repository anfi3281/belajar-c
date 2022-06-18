// -----------------------------------------------------------
// Contoh pemrosesan pada array, yaitu untuk
//  menghitung nilai rata-rata suhu
// -----------------------------------------------------------

#include <stdio.h>

int main()
{
    const int JUM_ELEMEN = 5;
    float suhu[JUM_ELEMEN]; // Array dengan JUM_ELEMEN d
                 // data bertipe float

    // Membaca data dari keyboard
    printf("Masukkan %d data suhu\n", JUM_ELEMEN);
    int i;
    for(i = 0; i < JUM_ELEMEN; i++)
    {
        printf("%d : ", i+ 1);
        scanf("%f", &suhu[i]);
    }

    // Menghitung nilai rata-rata
    float total = 0;
    for (i = 0; i < JUM_ELEMEN; i++)
    {
        total += suhu[i]; // Tambahkan isi elemen ke total
    }

    // Tampilkan nilai rata-rata
    float rata_rata = total / JUM_ELEMEN;
    printf("Suhu rata-rata: %g\n", rata_rata);

    return 0;
}
