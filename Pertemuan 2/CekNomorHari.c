/*Nama File : CekNomorHari.c*/
/*Deskripsi : Mengecek dan menampilkan nama hari berdasarkan input yang ada di layar*/
/*Pembuat   : Tiara Putri Wibowo*/
/*Tanggal   : Rabu, 01 Maret 2023, 10.17*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //kamus
    int hr;

    //algoritma
    printf("Masukan nomor hari : ");
    scanf("%d", &hr);
    printf("======================= \n");

    switch(h){
    case 1:
        printf("Hari Minggu");
        break;

    case 2:
        printf("Hari Senin");
        break;

    case 3:
        printf("Hari Selasa");
        break;

    case 4:
        printf("Hari Rabu");
        break;

    case 5:
        printf("Hari Kamis");
        break;

    case 6:
        printf("Hari Jumat");
        break;

    case 7:
        printf("Hari Sabtu");
        break;

    default:
        printf("Masukan nomer hari tidak tepat");
    }
    printf("\n======================= \n");
}
