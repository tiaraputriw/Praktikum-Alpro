/*Nama File : NilMax2Tabel.c*/
/*Deskripsi : menampilkan nilai maksimum ke 2 dari tabel T*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Rabu, 15 03 2023 10.00*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*Kamus*/
    int n = 10, i, max1, max2;
    int T[10] = {7,4,5,7,6,5,3,4,1,5};

    /*Algoritma*/
    max1 = 0;
    max2 = 0;

    for(i = 0; i < n; i++){
        if(T[i] > max1){
            max2 = max1;
            max1 = T[i];
        }else if(T[i] > max2 && T[i] != max1){
            max2 = T[i];
        }
    }

    printf("Tabel T : ");
    for(i = 0; i < n; i++){
        printf("%d ", T[i]);
    }
    printf("\nNilai maksimum ke-2 adalah :%d\n", max2);
    return 0;
 }
