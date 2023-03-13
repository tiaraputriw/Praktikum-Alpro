/*Nama File : CekBilSemp.c*/
/*Deskripsi : Mengecek bilangan integer N termasuk bilangan sempurna atau bukan*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Senin, 13 03 2023, 21.47*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N,i,s=0;

    /*Algoritma*/
    printf("Masukan Nilai N : ");
    scanf("%d", &N);

    if(N > 0){
        for(i = 1; i <= N-1; i++){
            if(N % i == 0){
                s = s + i;
            }
        }if(s == N){
            printf("Bilangan Sempurna");
        }else{
            printf("Bukan Bilangan Sempurna");
        }
    }else{
        printf("Masukan nilai tidak tepat");
    }
    return 0;
}
