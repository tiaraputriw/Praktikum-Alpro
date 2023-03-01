/*Nama File : luasKellLayang.c*/
/*Deskripsi : menghitung dan menampilkan luas layang-layang dan keliling layang-layang, l = 1/2 x d1 x d2 dan k = 2 x (s1 + s2)*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Senin, 27 Februari 2023, 23.30*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kamus*/;
    float d1;
    float d2;
    float s1;
    float s2;
    float l;
    float k;

    /*Algoritma*/;
    printf("Masukkan nilai diagonal 1: ");
    scanf("%f", &d1);

    printf("Masukkan nilai diagonal 2: ");
    scanf("%f", &d2);

    printf("Masukkan nilai sisi 1: ");
    scanf("%f", &s1);

    printf("Masukkan nilai sisi 2: ");
    scanf("%f", &s2);

    l = 0.5 * d1 * d2;

    printf("Luas layang-layang dari 1/2 x %.2f x %.2f = %.2f\n", d1, d2, l);

    k = 2 * (s1 + s2);

    printf("Keliling layang-layang dari 2 x (%.2f + %.2f) = %.2f\n", s1, s2, k);
    return 0;
}
