/*Nama File : jarakPBola.c*/
/*Deskripsi : menghitung dan menampilkan jarak y, y = v0 x t - 1/2 x (g x t^2)*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Sabtu, 25 Februari 2023, 20.27*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kamus*/;
    float v0;
    float t;
    float g;
    float y;

    /*Algoritma*/;
    printf("Masukkan nilai kecepatan awal: ");
    scanf("%f", &v0);

    printf("Masukkan waktu: ");
    scanf("%f", &t);

    printf("Masukkan nilai percepatan: ");
    scanf("%f", &g);

    y = v0 * t - 0.5 *(g*pow(t,2));

    printf("Jarak PBola dari %.2f x %.2f - 1/2 x (%.2f x %.2f x %.2f)= %.2f\n", v0, t, g, t, t, y);
    return 0;
}

