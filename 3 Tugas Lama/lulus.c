// -----------------------------------------------------
// Contoh pemakaian array berdimensi dua
//  untuk menampung data kelulusan
//  3 jurusan studi selama 4 tahun
// -----------------------------------------------------

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int data_lulus[3][4];
    int tahun, jurusan;

    // Isikan data ke array
    data_lulus[0][0] = 75; // data TI = 2012
    data_lulus[0][1] = 85; // data TI = 2013
    data_lulus[0][2] = 80; // data TI = 2014
    data_lulus[0][3] = 120; // data TI = 2015
    data_lulus[1][0] = 100; // data MI = 2012
    data_lulus[1][1] = 110; // data MI = 2013
    data_lulus[1][2] = 120; // data MI = 2014
    data_lulus[1][3] = 115; // data MI = 2015
    data_lulus[2][0] = 100; // data TK = 2012
    data_lulus[2][1] = 115; // data TK = 2013
    data_lulus[2][2] = 120; // data TK = 2014
    data_lulus[2][3] = 117; // data TK - 2015

    //Pemasukan data jurusan
    while (true)
    {
        printf("Jurusan (0 = TI, 1 = MI, 2 = TK): ");
        scanf("%d", &jurusan);
        if (jurusan == 0 || jurusan == 1 || jurusan == 2)
        {
            break; // Keluar dari while
        }
    }

    // Pemasukkan data tahun
    while (true)
    {
        printf("Tahun (2012- 2015): ");
        scanf("%d", &tahun);

        if (tahun >= 2012 && tahun <=2015)
        {
            tahun = tahun - 2012; // Konversi ke 0,1, ...
            break; // Keluar dari while
        }
    }

    // Tampilkan informasi kelulusan
    printf("Jumlah yang lulus = %d\n", data_lulus[jurusan][tahun]);

    return 0;
}
