#include <stdio.h>
#define panjang 8
#define lebar 5

int luas;

int main(int argc, char const *argv[])
{
    printf("Operasi Hitung Luas \n");
    printf("Panjang = %d \n", panjang);
    printf("Lebar = %d \n", lebar);
    luas = panjang * lebar;
    printf("Luas = %d \n", luas);
}
