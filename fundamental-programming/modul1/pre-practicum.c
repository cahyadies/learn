#include <stdio.h>
#define a 2.5

int main(int argc, char const *argv[])
{
    int nim, bil1, bil2, bil3, jumlah;
    float hasil;

    printf("Masukkan 3 digit terakhir NIM Anda : ");
    scanf("%d", &nim);
    printf("Masukkan bilangan pertama : ");
    scanf("%d", &bil1);
    printf("Masukkan bilangan kedua : ");
    scanf("%d", &bil2);

    jumlah = nim - (bil1 + bil2);
    printf("Jumlah yang diperoleh : %d \n", jumlah);

    printf("Masukkan bilangan ketiga : ");
    scanf("%d", &bil3);
    hasil = jumlah * bil3 / a;
    printf("NIM Anda adalah : %d \n", nim);
    printf("Hasil yang Anda perolah dari datas diatas adalah %f \n", hasil);
    return 0;
}
