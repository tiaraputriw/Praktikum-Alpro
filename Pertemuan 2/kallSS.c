/*Nama File : kallSS.c*/
/*Deskripsi : Menghitung dan menampilkan keluaran berupa operasi aritmatika sesuai pilihan*/
/*Pembuat   : Tiara Putri Wibowo*/
/*Tanggal   : Rabu, 01 Maret 2023, 10.50*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*kamus*/
    int iA;
    int iB;
    char OP;
    float hs;
    int h;

    /*Algoritma*/
    printf("================================\n");
    printf("Masukan pilihan operasi: ");
    scanf("%c", &OP);
    printf("================================\n");

    printf("Masukan nilai iA: ");
    scanf("%d", &iA);

    printf("Masukan nilai iB: ");
    scanf("%d", &iB);

    printf("================================\n");
    switch(OP){
    case 'a':
        h = iA + iB;
        printf("%d + %d = %d\n", iA, iB, h);
        break;
    case 'b':
        h = iA - iB;
        printf("%d - %d = %d\n", iA, iB, h);
        break;
    case 'c':
        h = iA * iB;
        printf("%d * %d = %d\n", iA, iB, h);
        break;
    case 'd':
        hs = (float)iA / (float)iB;
        printf("%d / %d = %.2f\n", iA, iB, hs);
        break;
    case 'e':
        h = iA / iB;
        printf("%d div %d = %d\n", iA, iB, h);
        break;
    case 'f':
        h = iA % iB;
        printf("%d mod %d = %d\n", iA, iB, h);
        break;
    default:
        printf("Bukan pilihan menu yang benar");
    }
    printf("================================\n");
    return 0;
}
