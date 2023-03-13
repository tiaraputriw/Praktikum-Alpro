/*Nama File : BilPrimaN.c*/
/*Deskripsi : Menghasilkan bilangan prima sampai dengan bilangan integer N (N>0)*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Senin, 13 03 2023, 22.10*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N, i, p, jum;

    /*Algoritma*/
    printf("Masukan bilangan : ");
    scanf("%d", &N);

    if(N > 0){
        for(i = 1; i <= N; i++){
            jum = 0;
                for(p = 1; p <= i; p++){
                    if(i % p == 0){
                        jum = jum + 1;
                    }
                }if(jum == 2){
                    printf("%d ", i);
                }
        }
    }else{
        printf("Masukan bilangan tidak tepat");
    }
    return 0;
}
