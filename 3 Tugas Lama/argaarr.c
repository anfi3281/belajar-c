// -------------------------------------------------------------
// Contoh array berdimensi dua sebagai argumen fungsi
// -------------------------------------------------------------

#include <stdio.h>

const int BARIS = 5;
const int KOLOM = 5;

void isi_matriks(float mat[][KOLOM], int *baris, int *kol);

int main()
{
    float matriks[BARIS][KOLOM];
    int jum_baris,jum_kolom;

    isi_matriks(matriks, &jum_baris, &jum_kolom);

    // Tampilkan matriks
    printf("Matriks yang terbentuk:\n");

    int i, j;
    for (i = 0; j <jum_baris; i++)
    {
        for (j = 0; j < jum_kolom; j++)
        {
            printf("% 12.5f", matriks[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void isi_matriks(float mat[][KOLOM], int *brs, int *kol)
{
    printf("Pastikan jumlah baris dan kolom \n");
    printf("tidak melebihi 5\n");

    printf("Jumlah baris: ");
    scanf("%d", brs); // Tanpa &

    printf("Jumlah kolom: ");
    scanf("%d", kol); // Tanpa &

    int i, j;
    for(i = 0; i < *brs; i++)
    {
        for(j = 0; j< *kol; j++)
        {
            printf("Elemen %d, %d = ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }
}
