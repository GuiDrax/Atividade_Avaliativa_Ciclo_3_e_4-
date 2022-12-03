//Algorítmo implementado: Bubble sort
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_ARRAY 10 //Define o tamanho do array

    void printArray(int a[]);
    void swap(int* x, int* y);
    void bubbleSort(int array[], int tamanhoArray);
    
int main()
    {
   int array[TAMANHO_ARRAY]={1,5,7,2,8,12,65,35,10,70};
   printf("array original: ");
    printArray(array);
    bubbleSort(array,TAMANHO_ARRAY);
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
  void swap(int* x, int* y){ //Troca dois valores de lugar
    int temp = *x;
    *x = *y;
    *y = temp;
}
    void bubbleSort(int array[], int tamanhoArray){
    int trocou;
    int i = 0;
    do {
        trocou = 0;
        for (int j = 0; j < tamanhoArray - 1 - i; ++j) { //-1, pois não existe um elemento à direita do último para comparação, -i, pois no final de cada passada o último número sempre vai estar ordenado
            if (array[j] > array[j+1]) {
                swap(&array[j], &array[j + 1]);
                trocou = 1; //Avisa que houve uma troca
            }
        }
        i++;
    } while (trocou); //Para o algoritmo caso o array já esteja ordenado
}