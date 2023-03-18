/*Nama File : JumBarKolMat.c*/
/*Deskripsi : Menampilkan jumlah setiap baris dan kolom pada tabel T*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Sabtu, 18 03 2023 22.12*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*Kamus*/
    int b ,k ,i, j, sb, sk;
    int T[3][3];

    /*Algoritma*/
    printf("Nilai Baris: ");
    scanf("%d", &b);
    printf("\nNilai Kolom: ");
    scanf("%d", &k);

    for (i = 0; i < b; i++){
        for (j = 0; j < k; j++){
            printf("Tabel %d x %d = ", i, j);
            scanf("%d", &T[i][j]);
        }
    }

    printf("\nTabelnya : ");
    for (i = 0; i < b; i++){
        for (j = 0; j < k; j++){
            printf("%d", T[i][j]);
        }
    }

    for (i = 0; i < b; i++){
        sb = 0;
        for (j = 0; j < k; j++){
            sb += T[i][j];
            printf("\nJumlah Baris ke %d : %d\n", i+1 , sb);
        }
    }
    for (i = 0; i < b; i++){
        sk = 0;
        for (j = 0; j < k; j++){
            sk += T[j][i];
            printf("\nJumlah Kolom ke %d : %d\n", i+1 , sk);
        }
    }
    return 0;
}
