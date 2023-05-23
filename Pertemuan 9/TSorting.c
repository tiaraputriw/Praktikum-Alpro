/*Nama File : TSorting.c*/
/*Deskripsi : Mengurutkan array dengan menggunakan BubbleSort, CountingSort, InsertionSort, dan SelectionSort*/
/*Pembuat   : Tiara Putri Wibowo - 24060122120026*/
/*Tanggal   : Selasa, 23/05/2023 11.00*/

#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int s)
{
    //Kamus
    int i, j, temp;

    //Algoritma
    for(i = 0; i < s-1; i++){
        for(j = 0; j < s-i-1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int findMax(int arr[], int s)
{
    int max = arr[0];
    for(int i = 1; i < s; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

void CountingSort(int arr[], int s)
{
    int max = findMax(arr, s);
    int* count = (int*)malloc((max + 1) * sizeof(int));

    for(int i = 0; i <= max; i++){
        count[i] = 0;
    }

    for(int i = 0; i < s; i++){
        count[arr[i]]++;
    }

    for(int i = 1; i <= max; i++){
        count[i] += count[i - 1];
    }

    int* sortedArray = (int*)malloc(s * sizeof(int));

    for(int i = s-1; i >= 0; i--){
        sortedArray[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    for(int i = 0; i < s; i++){
        arr[i] = sortedArray[i];
    }
    free(count);
    free(sortedArray);
}

void InsertionSort(int arr[], int s)
{
    //Kamus
    int i;
    int temp;
    int j;

    //algoritma
    for(i = 1; i < s; i++){
        temp = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] >temp){
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = temp;
    }
}

void SelectionSort(int arr[], int s)
{
    //Kamus
    int i;
    int j;
    int min;
    int temp;

    //Algoritma
    for(i = 0; i < s; i++){
        min = i;
        for(j = i; j < s; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }

        //pertukaran
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    //kamus lokal
    char pilih;
    int s, i;

    //Algoritma
    printf("=======================PROGRAM SORTING===================\n");
    printf("Masukkan Panjang array : ");
    scanf("%d", &s);

    int arr[s];
    printf("Masukkan arraynya : ");
    for(int i = 0; i < s; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nArray sebelum diurutkan :");
    for(i = 0; i < s; i++){
        printf("%d ", arr[i]);
    }

    printf("\nPilih sort yang digunakan : ");
    scanf(" %c", &pilih);

    switch(pilih){
    case 'A':
        printf("Sorting yang digunakan adalah Bubble Sort\n");
        BubbleSort(arr,s);
        break;
    case 'B':
        printf("Sorting yang digunakan adalah Count Sort\n");
        CountingSort(arr,s);
        break;
    case 'C':
        printf("Sorting yang digunakan adalah Insertion Sort\n");
        InsertionSort(arr,s);
        break;
    case 'D':
        printf("Sorting yang digunakan adalah Selection Sort\n");
        SelectionSort(arr,s);
        break;
    default:
        printf("Pilihan tidak tepat");
    }

    printf("\nArray setelah diurutkan :");
    for(i = 0; i < s; i++){
        printf("%d ", arr[i]);
    }
    printf("\n=========================================================");
    return 0;
}
