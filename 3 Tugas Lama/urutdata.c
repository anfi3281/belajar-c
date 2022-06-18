// --------------------------------------------------------
// Contoh untuk mengurutkan data dengan menggunakan
//  metode bubble sort
// --------------------------------------------------------

#include <stdio.h>

void tampilkan_data(int data[], int jum_data);

int main()
{
    int data[] = { 5, 100, 20, 31, 77, 88, 99, 20, 55, 1};

    int jum_data = sizeof(data) / sizeof(int);

    printf("Data semula:\n");
    tampilkan_data(data, jum_data);

    // Proses pengurutan
    int i, j;
    for (i = 0; i < jum_data - 1; i++)
    {
        for (j = i; j < jum_data; j++)
        {
            if (data[i] > data[j])
            {
                // Tukarkan
                int tmp = data[i];
                data[i] = data[j];
                data[j] = tmp;
            }
        }
    }

    printf("Data hasil pengurutan:\n");
    tampilkan_data(data, jum_data);

    return 0;
}

void tampilkan_data(int data[], int jum_data)
{
    int i;
    for (i = 0; i < jum_data; i++)
    {
        printf("%d", data[i]);
    }
    printf("\n");
}
