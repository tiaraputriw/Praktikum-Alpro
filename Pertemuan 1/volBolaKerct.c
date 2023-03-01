/*Nama File : volBolaKerct.c*/
/*Deskripsi : menghitung dan menampilkan volume bola dan volume kerucut, vb = 4/3 x (phi x r^3) dan vk = 1/2 x vb*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Minggu, 26 Februari 2023, 22.10*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kamus*/;
    float r;
    float vb;
    float vk;
    float phi;

    /*Algoritma*/;
    phi = 3.14;
    printf("Masukkan nilai jari-jari: ");
    scanf("%f", &r);

    vb = 1.3 * (phi*(pow(r,3)));

    printf("Volume Bola dari 4/3 x (3,14 x %.2f x %.2f x %.2f) = %.2f\n", r, r, r, vb);

    vk = 0.5 * vb;

    printf("Volume Kerucut dari 1/2 x %.2f = %.2f\n", vb, vk);
    return 0;
}

