// -------------------------------------------------
// Contoh program yang menggunakan array
// -------------------------------------------------

#include <stdio.h>

int main()
{
    const int JUM_ELEMEN = 5;
    float suhu[JUM_ELEMEN]; // Array dengan JUM_ELEMEN d
                            // data bertipe float

    // Membaca data dari keyboard
    printf("Masukkan %d data suhu\n", JUM_ELEMEN);

    int i;
    for (i=0; i < JUM_ELEMEN; i++)
    {
        printf("%d : ", i+1);
        scanf("%f", &suhu[i]);
    }

    // Menampilkan isi array
    printf("Data suhu yang Anda masukkan :\n");
    for (i = 0; i < JUM_ELEMEN; i++)
    {
        printf("%g\n", suhu[i]);
    }
    return 0;
}
