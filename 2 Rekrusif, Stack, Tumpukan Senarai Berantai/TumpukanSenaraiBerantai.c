//tumpukanSenaraiBerantai.c
# include <stdio.h>
# include <stdlib.h>
#include <conio.h>

#define UKURAN 10

struct Tumpukan
{
    int data;
    struct Tumpukan *brktnya; // struktur referensi-diri
};

typedef struct Tumpukan tmpkan;
tmpkan *tos = NULL;

void push();
int pop();
void Tampil();

void main()
{
    int pilihan = 0;
    int nil;
    
    do
    {
        printf("\n MENU........\n");
        printf("\b 1. Tempatkan item data ke atas tumpukan dan tampilkan");
        printf("\n 2. Hapus item data dari atas tumpukan dan tampilkan");
        printf("\n 3. Tampilkan Tumpukan");
        printf("\n 4. Keluar");

        printf("\n Masukkan pilihan Anda: ");
        scanf("%d",&pilihan);

        switch(pilihan)
        {
            case 1:
                push();
                Tampil();
                break;
            
            case 2: nil = pop();
                printf("\n Menghapus nilai %d", nil);
                printf("\n Tumpukan setelah penghapusan...");
                Tampil();
                break;

                case 3:
                    Tampil();
                    break;

                case 4:
                    printf("Keluar dari program");
                    break;

                default:
                    printf("\nPilihan salah <Masukkan antara 1 dan 4");
        }
    } while(pilihan!=4);

    getch();
}// akhir dari main

//definisi fungsi
void push()
{
    tmpkan *simpul; // simpul merupakan simpul baru sebagai simpul pertama
    simpul = (tmpkan*)malloc(sizeof(tmpkan));

    printf("\n Masukkan data yang akan ditempatkan ke atas Tumpukan: ");
    scanf("%d", &simpul->data);

    //membuat simpul sebagai simpul pertama pada Tumpukan
    simpul->brktnya = tos;
    tos = simpul; // sekarang tos menunjuk ke simpul yang baru disisipkan
}

int pop()
{
    int nil;

    // menyimpan simpul pertama pada temp
    tmpkan *temp;
    temp = tos;

    //memeriksa apakah Tumpuan kosong
    if (tos==NULL)
    {
        printf("\n Tumpukan kosong");
        exit(0);
    }
    
    else
    {
        nil=tos->data;

        // menggeser tos ke elemen berikutnya
        tos = tos -> brktnya;
        free(temp); // membebaskan temp
    }
    return nil;
}

void Tampil()
{
    tmpkan *temp;
    temp = tos; // Menggunakan temp untuk menjelajah Tumpukan

    printf("\n Elemen-elemen tumpukan adalah....\n");
    if (temp == NULL)
        printf("\n Tumpukan kosong");
    else
    {
        while (temp->brktnya != NULL)
        {
            printf(" %d \n", temp->data);
            temp = temp->brktnya;
        } //akhir dari while
        
        printf("%d", temp->data);
    }//akhir dari else
}