/*Nama File : gayaSentr.c*/
/*Deskripsi : menghitung dan menampilkan gaya f, f = m x (v^2/r)*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Sabtu, 25 Februari 2023, 20.33*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kamus*/;
    float m;
    float v;
    float r;
    float f;

    /*Algoritma*/;
    printf("Masukkan nilai massa: ");
    scanf("%f", &m);

    printf("Masukkan nilai kecepatan: ");
    scanf("%f", &v);

    printf("Masukkan nilai jari-jari: ");
    scanf("%f", &r);

    f = m * (pow(v,2))/r;

    printf("Gaya dari %.2f x (%.2f x %.2f) / %.2f = %.2f\n", m, v, v, r, f);
    return 0;
}
