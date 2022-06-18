// -----------------------------
// Contoh array pointer
// -----------------------------

#include <stdio.h>

int main()
{
    char *namahari[7] =
    {
        "Senin","Selasa","Rabu","Kamis","Jumat","Sabtu","Minggu"
    };

    // Menampilkan nama hari via pointer phari
    int i;
    for (i = 0; i < 7;i++)
        printf("%s\n", namahari[i]);

    return 0;
}
