/*Nama File : FaktorBil.c*/
/*Deskripsi : Menghitung faktor bilangan dari N (N>0)*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Senin, 13 03 2023, 20.45*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N, k;

    /*Algoritma*/
    printf("Masukan bilangan N :");
    scanf("%d", &N);

    if(N > 0){
        printf("Faktor bilangannya adalah ");
        for(k = 1; k <= N; k++){
            if(N % k == 0){
                printf("%d ", k);
            }
        }
    }else{
        printf("Masukan bilangan tidak tepat");
    }
    return 0;
}
