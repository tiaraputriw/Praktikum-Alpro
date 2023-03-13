/*Nama File : CekBilPrima.c*/
/*Deskripsi : Mengecek bilangan integer N termasuk bilangan prima atau bukan*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Senin, 13 03 2023, 21.15*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int N, j, p=0;

    /*Algoritma*/
    printf("Masukan Nilai N : ");
    scanf("%d", &N);
    if(N > 0){
        for(j = 1; j <=N; j++){
            if(N % j == 0){
                p = p + 1;
            }
        }if(p == 2){
            printf("\nBilangan prima");
        }else{
            printf("\nBukan bilangan prima");
        }
    }else{
        printf("Masukan nilai tidak tepat");
    }
    return 0;
}
