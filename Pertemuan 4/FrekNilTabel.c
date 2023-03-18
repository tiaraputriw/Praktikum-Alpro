/*Nama File : FrekNilTabel.c*/
/*Deskripsi : menampilkan nilai elemen tabel T yang kemunculannya lebih dari 1 kali*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Rabu, 15 03 2023 10.10*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kamus*/
    int n = 10, i, j, element;
    int T[10] = {7,4,5,7,6,5,3,4,1,5};

    /*Algoritma*/
    printf("Tabel T : ");
    for (i = 0; i < n; i++){
        printf("%d ", T[i]);
    }

    printf("\nElemen yang muncul lebih dari satu kali: ");
    for (i = 0; i < n; i++) {
        element = 1;
        for(j = i+1; j < n; j++){
            if(T[i] != 0 && T[i] == T[j]){
                element = element + 1;
                T[j] = 0;
            }
        }if(element != 1){
            printf("%d ", T[i]);
        }
    }
    return 0;
}
