/*Nama File : SimetriTabel.c*/
/*Deskripsi : Mengecek tabel T1 dan T2 simetri atau tidak*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Sabtu, 18 03 2023 21.07*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*Kamus*/
    int n = 10, m = 10, c, i;
    int T1[10] = {7,4,5,7,6,5,3,4,1,5};
    int T2[10] = {7,4,5,7,6,5,3,4,1,5};

    /*Algoritma*/
    printf("Tabel T1 : ");
    for (i = 0; i < n; i++){
        printf("%d ", T1[i]);
    }

    printf("\nTabel T2 : ");
    for (i = 0; i < n; i++){
        printf("%d ", T2[i]);
    }

    if (n == m){
        c = 0;
        for (i = 0; i < n; i++){
            if (T1[i] == T2[i]){
                c = c + 1;
            }
        }if (c == n){
            printf("\nSimetri\n");
        }else{
            printf("\nTidak Simetri\n");
        }
    }else{
        printf("\nTidak Simetri\n");
    }
    return 0;
}
