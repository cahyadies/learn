#include <stdio.h>

int main(int argc, char const *argv[])
{
    int nilai1, nilai2, nilai3, jumlah;
    float rata2, nilai_akhir;
    printf("NILAI PRAKTIKUM \n");
    printf("masukkan nilai 1 : ");
    scanf("%d", &nilai1);
    printf("masukkan nilai 2 : ");
    scanf("%d", &nilai2);
    printf("masukkan nilai 3 : ");
    scanf("%d", &nilai3);
    printf("Nilai akhir 4 persen dari rata rata nilai yang diperoleh \n");
    jumlah = nilai1 + nilai2 + nilai3;
    rata2 = jumlah / 3;
    nilai_akhir = rata2 * 4 / 100;
    printf("rata rata nilai yang kamu peroleh adalah : %.2f \n", rata2);
    printf("Nilai akhir yang kamu peroleh adalah : %.2f \n", nilai_akhir);
    return 0;
}
