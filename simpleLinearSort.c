#include<stdio.h>
#include<conio.h>

void swap(int numArr[], int i, int j){
	int temp;
	temp = numArr[i];
	numArr[i] = numArr[j];
	numArr[j] = temp;
}

void simpleLinearSort(int numArr[], int size){
	int i, j, k;
	printf("\n\nPerforming Sort\n\n");
	for(i=0; i<size; i++){
		for(j=i+1; j<size; j++){
			if(numArr[i] < numArr[j]){
				swap(numArr, i, j);
				for(k=0; k<size; k++){
					if(k == i){
						_textcolor(2);
						printf("%d ", numArr[k]);
						_textcolor(15);
					}
					else if(k == j){
						_textcolor(4);
						printf("%d ", numArr[k]);
						_textcolor(15);
					}
					else{
						printf("%d ", numArr[k]);
					}
				}
				printf("Swap Occured\n");
				printf("\n");
			}
			else{
				for(k=0; k<size; k++){
					printf("%d ", numArr[k]);
				}
				printf("No Swap Occured\n");
				printf("\n");
			}
		}
	}
}

int main(void){

	int size;

	printf("Enter the size of the array: ");
	scanf("%d", &size);

	int numArr[size];

	printf("\n\nEnter the elements:\n");
	for(int i=0; i<size; i++){
		scanf("%d", &numArr[i]);
	}

	printf("\nBefore Using Selection Sort\n");
	printf("Unsorted Array: ");
	for(int i=0; i<size; i++){
		printf("%d ", numArr[i]);
	}

	simpleLinearSort(numArr, size);
	printf("Swapping Completed\n\n");

	printf("After Using Selection Sort\n");
	printf("Sorted Array: ");
	for(int i=0; i<size; i++){
		printf("%d ", numArr[i]);
	}

	printf("\n\n");
}
