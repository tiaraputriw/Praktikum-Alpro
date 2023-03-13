/*Nama File : JumDeret.c*/
/*Deskripsi : Menghitung jumlah total deret bilangan dari N integer*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Senin, 13 03 2023, 20.31*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N,i,h=0;

    /*Algoritma*/
    printf("Masukan batas deret :");
    scanf("%d", &N);

    if(N > 0){
        for(i = 1; i <= N;i++) {
            h = h+i;
        }
        printf("\nJumlah deret dari 1 hingga %d : %d", N, h);
    }
    else {
        printf("Masukan bilangan tidak tepat");
    }
    return 0;
}
