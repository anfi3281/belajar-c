//Faktorial.c
#include <stdio.h>
#include <conio.h>

// prototipe fungsi
int Faktorial(int a);

void main()
{
    int x, hasil;

    printf("Masukkan sebuah angka: \n");
    scanf("%d", &x); /*masukan dari pengguna*/

    hasil = Faktorial(x); /*pemanggilan fungsi*/
    printf("Faktorial = %d", hasil);
    getch();
} /*akhir dari main*/

int Faktorial(int a) /*definisi fungsi*/
{
    int hasil;

    if(a <= 0)
        return(1); // Faktorial(0) = 1
    else
        hasil = a*Faktorial(a-1); /*pemanggilan fungsi dengan rekursi*/

    return(hasil); /*mengembalikan nilai dari Faktorial kepada main*/
} /*akhir dari fungsi Faktorial*/