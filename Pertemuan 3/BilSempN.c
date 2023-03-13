/*Nama File : BilSempN.c*/
/*Deskripsi : Menghasilkan bilangan sempurna sampai dengan bilangan integer N (N>0)*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Senin, 13 03 2023, 22.30*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N, i, j, jumlah;

    /*Algoritma*/
    printf("Masukan bilangan : ");
    scanf("%d", &N);

    if(N > 0){
        for(i = 1; i <= N; i++){
            jumlah = 0;
            for(j = 1; j < i; j++){
                if(i % j == 0){
                    jumlah += j;
                }
            }if(jumlah == i){
                printf("%d", i);
            }
        }
    }else{
        printf("Masukan bilangan tidak tepat");
    }
    return 0;
}
