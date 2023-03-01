/*Nama File : Segitiga.c*/
/*Deskripsi : Mengecek apakah 3 inputan sisi termasuk segitiga sama kaki, sama sisi, atau sembarang*/
/*Pembuat   : Tiara Putri Wibowo*/
/*Tanggal   : Rabu, 01 Maret 2023, 10.40*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int x;
    int y;
    int z;

    /*Algotirma*/
    printf("Masukan nilai alas : ");
    scanf("%d", &x);

    printf("Masukan nilai y : ");
    scanf("%d", &y);

    printf("Masukan nilai z : ");
    scanf("%d", &z);

    printf("============================\n");

    if(x >= 0 && y >= 0 && z >=0){
        if(y == z){
            if(x == y && y == z && z == x){
                printf("Segitiga sama sisi");
            }else{
                printf("Segitiga sama kaki");
            }
        }else{
            printf("Segitiga sembarang");
        }
    }else{
        printf("Terdapat nilai yang bukan sisi segitiga");
    }
    printf("\n============================\n");
    return 0;
}
