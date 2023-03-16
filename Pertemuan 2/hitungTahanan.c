/*Nama File : hitungTahanan.c*/
/*Deskripsi : Mengecek dan menampilkan nilai kebenaran 3 input bilangan positif serta menghitung total tahanan*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Rabu, 01 Maret 2023, 10.30*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int t1;
    int t2;
    int t3;
    int total;

    /*Algoritma*/
    printf("Masukan nomor tahanan ke-1 : ");
    scanf("%d",&t1);

    printf("Masukan nomor tahanan ke-2 : ");
    scanf("%d",&t2);

    printf("Masukan nomor tahanan ke-3 : ");
    scanf("%d",&t3);

    printf("====================================\n");
    if(t1 < 0 || t2 < 0 || t3 < 0){
        printf("Masukan tahanan tidak boleh negatif");
    }else{
        total = t1 + t2 + t3;
        printf("Total tahanan = %d", total);
    }
    printf("\n====================================\n");
    return 0;
}
