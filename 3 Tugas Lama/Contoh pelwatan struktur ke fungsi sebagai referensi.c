// ---------------------------------------
// Contoh pelewatan struktur ke fungsi sebagai referensi
// ---------------------------------------

#include <stdio.h>

struct koordinat
{
    int x;
    int y;
};

void ubah_posisi(struct koordinat *posisi);// Prototipe

int main()
{
    struct koordinat posisi; // Deklarasi variabel struktur
    posisi.x = 27;
    posisi.y = 55;

    printf("Posisi semula:\n");
    printf("posisi x = %d\n", posisi.x);
    printf("posisi y = %d\n", posisi.y);

    ubah_posisi(&posisi);
    printf("Posisi sekarang:\n");
    printf("posisi x = %d\n", posisi.x);
    printf("posisi y = %d\n", posisi.y);

    return 0;
}

void ubah_posisi(struct koordinat *posisi)
{
    posisi->x = 56;
    posisi->y = 78;
}
