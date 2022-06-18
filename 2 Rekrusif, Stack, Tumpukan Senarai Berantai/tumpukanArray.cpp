//tumpukanArray.c
#include <stdio.h>
#include <conio.h>

#define MAKS 10

// prototipe fungsi
int push(int nil);
int pop();
int Tampil();
int apaKosong();
int apaPenuh();

// deklarasi struktur Tumpukan
struct Tumpukan //mengimplementasikan Tumpukan sebagai suatu struktur
{
    int s[10];
    int sp;
};

typedef struct Tumpukan tmpkan;
tmpkan st;

int main()
{
    int pilihan, item; // item yang akan ditempatkan ke atas Tumpukan
    st.sp = -1; // -1 mengindikasikan banyak Tumpukan kosong.

    do
    {
        printf("\n\n");
        printf("\n MENU");
        printf("\n 1:push");
        printf("\n 2:pop");
        printf("\n 3:tampil");
        printf("\n 4:keluar\t\t");

        printf("\n Masukkan pilihan Anda: ");
        scanf("%d",&pilihan);

        switch(pilihan)
        {
            case 1:
            printf("\n Masukkan sebuah elemen ke atas tumpukan: ");
            scanf("%d", &item); //membaca item
            push(item);
            Tampil();
            break;

            case 2:
            pop();
            Tampil();
            break;

            case 3:
            Tampil();
            break;
        }
    }while (pilihan !=4);

    return 0;
    getch();
} // akhir dari main

// Definisi fungsi
int apaKosong()
{
    if(st.sp == -1)
    {
        printf("Tumpukan kosong");
        return 1;
    }

    else
        return 0;
}// akhir dari apaKosong()

int apaPenuh()
{
    if(st.sp == MAKS-1)
    {
        printf("Tumpukan Penuh");
        return 1;
    }

    else
        return 0;
} // akhir dari apaPenuh()

int push(int nil)
{
    /* item akan ditempatkan ke atas tumpukan. Variabel jwb memuat informasi
    jika tumpukan penuh atau kosong yang dihasilkan oleh fungsi apaPenuh()*/
    int jwb;
    jwb = apaPenuh(); // memanggil apaPenuh()

    if ( jwb == 0) // Tumpukan tidak penuh
    {
        st.sp++;
        st.s[st.sp] = nil; //menugaskan nil kepada st[sp]
    }

    else
    {
        printf("Tumpukan Penuh");
    }

    return 0;
} // akhir dari push().

int pop()
{
    // jwb memuat nilai balik dari apaKosong().
    // Nilai balik 1 jika tumpukan kosong. 0 jika tumpukan tidak kosong.
    int jwb;
    
    jwb = apaKosong();

    if (jwb == 0) // Tumpukan tidak kosong
    {
        //menampilkan item yang dihapus dari atas tumpukan
        printf("\nElemen teratas pada tumpukan adalah \t%d", st.s[st.sp]);
        st.sp--; //mendekremen Tumpukan[sp]
    }

    else
    {
        printf( "\nTumpukan kosong. Tidak ada item yang dapat dihapus.");
    }

    return 0;
}// akhir dari pop()

int Tampil()
{
    int i;
    printf("\n");

    if (apaKosong()== 0)
    {
        printf("\n ****Elemen-elemen pada Tumpukan****");

        for(i=st.sp;i>=0;i--) //menampilkan item-item Tumpukan
        printf("\n %d\t", st.s[i]);
    }
    
    else
    {
        printf("\nTumpukan kosong.");
    }

    return 0;
}//akhir dari Tampil()