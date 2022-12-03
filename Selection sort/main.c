//Algorítmo implementado: Selection sort
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_ARRAY 10 //Define o tamanho do array

    void printArray(int a[]);
    void selectionSort(int array[], int tamanhoArray);
    void swap(int* x, int* y);
    
int main()
    {
   int array[TAMANHO_ARRAY]={1,5,7,2,8,12,65,35,10,70};
   printf("array original: ");
    printArray(array);
    selectionSort(array,TAMANHO_ARRAY);
    printf("array ordenado: ");
    printArray(array);
    
    return 0;
    }
    void printArray(int a[]){
    for (int i = 0; i < TAMANHO_ARRAY; ++i) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void selectionSort(int array[], int tamanhoArray){
    for (int i = 0; i < tamanhoArray - 1; ++i) { //O ultimo elemento do array vai ser ordenado automáticamente
        int indiceNumMenor = i; //Mostra a posição do menor elemnto do array no loop atual
        for (int j = i + 1; j < tamanhoArray; ++j) {
            if (array[j] < array[ indiceNumMenor])
                 indiceNumMenor = j; //Muda a variável caso encontre um valor menor que o atual
        }
        if ( indiceNumMenor != i) //Troca os valores de lugar se preciso
            swap(&array[i], &array[ indiceNumMenor]);
    }
}
    void swap(int* x, int* y){ //Troca dois valores de lugar
    int temp = *x;
    *x = *y;
    *y = temp;
}