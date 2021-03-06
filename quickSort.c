#include<stdio.h>

/* Function to perform swapping */
void swap(int *element_1, int *element_2){
    int temp = *element_1;
    *element_1 = *element_2;
    *element_2 = temp;
}

/* partitioning function */
int partition(int array[], int low, int high){
	int target = array[high];
	int i = (low - 1);
	for(int j = low; j <= high - 1; j++){
		if(array[j] < target){
			i++;
			swap(&array[i], &array[j]);
		}
	}
	swap(&array[i + 1], &array[high]);
	return (i + 1);
}

/* Quick Sort function */
void quickSort(int array[], int low, int high){
    if(low < high){
		int part = partition(array, low, high);

		quickSort(array, low, part - 1);
		quickSort(array, part + 1, high);
	}
}

/* function to print the array elements */
void printElementsOfArray(int array[], int size){
    int i;
    printf("\nArray Elements: ");
    // using a loop to iterate through the array, printing the elements
    for(i = 0; i < size; i++)
        printf("%d ", array[i]);
    printf("\n");
}

int main(void){
    int array[] = {23, 45, 65, 17, 55, 98, 76};
    int size = sizeof(array)/sizeof(array[0]);

    // printing the array elements before performing sorting
    printf("Before Sorting: ");
    printElementsOfArray(array, size);

    quickSort(array, 0, size-1);

    printf("\nAfter Sorting: ");
    printElementsOfArray(array, size);

    return 0;
}
