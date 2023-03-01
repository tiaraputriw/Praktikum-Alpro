/*Nama File : jarakGLBB.c*/
/*Deskripsi : menghitung dan menampilkan jarak s, s = v0 x t + 1/2 x (a x t^2)*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Selasa, 21 Februari 2023, 17.18*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kamus*/;
    float v0;
    float t;
    float a;
    float s;

    /*Algoritma*/;
    printf("Masukkan nilai kecepatan awal: ");
    scanf("%f", &v0);

    printf("Masukkan waktu: ");
    scanf("%f", &t);

    printf("Masukkan nilai percepatan: ");
    scanf("%f", &a);

    s = v0 * t + 0.5 *(a*pow(t,2));

    printf("Jarak GLBB dari %.2f x %.2f + 1/2 x (%.2f x %.2f x %.2f)= %.2f\n", v0, t, a, t, t, s);
    return 0;
}
