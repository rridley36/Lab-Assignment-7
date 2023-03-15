#include <stdio.h>

int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
int n = sizeof(arr)/sizeof(int); // Computes the amount of elements in the array
int swaps[sizeof(arr)/sizeof(int)] = {0}; // // Global array for amount of swaps from each element

void bubbleSort(int *a) // Performs bubble sort
{
    for (int i = 0; i < n - 1; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (a[j] > a[j+1]) { // Swaps variable if the index that is greater has value less than the value of the previous index
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                swaps[j]++;
            }
        }
    }
}

void printArray(int *a){ // Prints array
   for (int i = 0; i < n; i++){
    printf("%d ", a[i]);
   }
    printf("\n");
}

int main (void){
    printf("Unsorted array: ");
    printArray(arr); // Prints unsorted array
    bubbleSort(arr); // Bubble sort the array
    printf("Sorted array: "); 
    printArray(arr); // Prints sorted array
    for (int i = 0; i < n; i++){
        printf("Swaps at index %d: %d\n", i, swaps[i]);  // Prints amount of swaps at each index
    }
}
