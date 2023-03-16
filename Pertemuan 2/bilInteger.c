/*Nama File : bilInteger.c*/
/*Deskripsi : Mengecek dan menampilkan bilangan bulat positif atau nol atau bilabgan bulat negatif*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Rabu, 01 Maret 2023, 10.11*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int i;

    /*Algoritma*/
    printf("Masukan nilai i : ");
    if(scanf("%d", &i)){
        if(i <= 0){
            if(i == 0){
                printf("Nol");
            }
            else{
                printf("Bilangan bulat negative");
            }
        }else{
            printf("Bilangan bulat positif");
        }
    }
    printf("\n======================= \n");
    return 0;
}
