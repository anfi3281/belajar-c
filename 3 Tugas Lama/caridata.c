// ----------------------------------------------------------
// Contoh penanganan untuk mencari suatu data
//  di array
// ----------------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int data[] = {5, 100, 20, 31, 77, 88, 99, 20, 55, 1};

    int x; // data dicari

    printf("Data yang Anda cari: ");
    scanf("%d", &x);

    bool ditemukan = false;
    int indeks;
    int i;
    for (i = 0; i < sizeof(data) / sizeof(int); i++)
    {
        if (data[i] == x)
        {
            ditemukan = true;
            indeks = i;
            break; // Keluar dari for
        }
    }

    if (ditemukan)
    {
        printf("Data tersebut ada di indeks %d\n", indeks);
    } else
    {
        printf("Data tersebut tidak ada!\n");
    }

    return 0;
}
