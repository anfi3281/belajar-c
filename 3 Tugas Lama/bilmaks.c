// -----------------------------------------------------------
// Memperoleh bilangan terbesar yang ada di array
// -----------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAKS = 10;
    int data[MAKS];
    int maks;

    // Memperoleh data secara acak
    srand(time(NULL));

    int i;
    for (i = 0; i< MAKS; i++)
    {
        data[i] = rand();
    }

    // Menampilkan data dan mencari data terbesar
    printf("DATA:\n");
    printf("%d\n", data[0]);
    maks = data[0]; // Isi dengan data pertama

    for (i = 1; i < MAKS; i++)
    {
        printf("%d\n", data[i]);
        if(data[i] > maks)
        {
            maks = data[i];
        }
    }

    printf("Data terbesar = %d\n", maks);

    return 0;
}
