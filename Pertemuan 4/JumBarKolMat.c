/*Nama File : JumBarKolMat.c*/
/*Deskripsi : Menampilkan jumlah setiap baris dan kolom pada tabel T*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Sabtu, 18 03 2023 22.12*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    /*Kamus*/
    int i, j, sb, sk;
    int T[3][3] = {{1,3,5},{2,5,2},{4,2,4}};

    /*Algoritma*/
    printf("Tabelnya : ");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            printf("%d", T[i][j]);
        }
    }

    for (i = 0; i < 3; i++){
        sb = 0;
        for (j = 0; j < 3; j++){
            sb += T[i][j];
            printf("\nJumlah Baris ke %d : %d\n", i+1 , sb);
        }
    }
    for (i = 0; i < 3; i++){
        sk = 0;
        for (j = 0; j < 3; j++){
            sk += T[j][i];
            printf("\nJumlah Kolom ke %d : %d\n", i+1 , sk);
        }
    }
    return 0;
}
