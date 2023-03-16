/*Nama File : namaBulan.c*/
/*Deskripsi : Mengecek dan menampilkan nama bulan berdasarkan input yang ada di layar*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Rabu, 01 Maret 2023, 10.22*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kamus*/
    int bl;

    /*Algoritma*/
    printf("Masukan nomor bulan : ");
    scanf("%d", &bl);

    printf("========================\n");

    switch(bl){
    case 1 :
        printf("Bulan Januari");
        break;
    case 2 :
        printf("Bulan Februari");
        break;
    case 3 :
        printf("Bulan Maret");
        break;
    case 4 :
        printf("Bulan April");
        break;
    case 5 :
        printf("Bulan Mei");
        break;
    case 6 :
        printf("Bulan Juni");
        break;
    case 7 :
        printf("Bulan Juli");
        break;
    case 8 :
        printf("Bulan Agustus");
        break;
    case 9 :
        printf("Bulan September");
        break;
    case 10 :
        printf("Bulan Oktober");
        break;
    case 11 :
        printf("Bulan November");
        break;
    case 12 :
        printf("Bulan Desember");
        break;
    default:
        printf("Masukan nomor bulan tidak tepat");
    }
    printf("\n========================\n");
    return 0;
}
