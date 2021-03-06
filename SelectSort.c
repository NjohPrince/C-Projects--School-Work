#include<stdio.h>
#include<conio.h>

#define SIZE 8

void selectionSort(int numArr[]){
	int current = 0;
	int i, j, k, temp, l;
	
	for(i=0; i<SIZE; i++){
		current = i;
		k = i;                     
		for(j=i+1; j<SIZE; j++){
			if(numArr[k] < numArr[j]){
				k = j;
			}
		}
		if(numArr[current] < numArr[k]){
			temp = numArr[current];
			numArr[current] = numArr[k];
			numArr[k] = temp;
		}
		printf("\n\n%d pass: ", i+1);
		for(l=0; l<SIZE; l++){
			if(l == current){
				_textcolor(2);
				printf("%d ", numArr[l]);
				_textcolor(15);
			}
			else if(l == k){
				_textcolor(3);
				printf("%d ", numArr[l]);
				_textcolor(15);
			}
			else
				printf("%d ", numArr[l]);
		}
	}
	printf("\n\n\tAFTER SORTING: ");
	for(i=0; i<SIZE; i++){
		printf("%d ", numArr[i]);
	}
}

int main(void){

	int numArr[] = {101, 115, 30, 263, 47, 295, 265, 59};
	int i;
	printf("\n\tBEFORE SORTING: ");
	for(i=0; i<SIZE; i++){
		printf("%d ", numArr[i]);
	}

	selectionSort(numArr);

	printf("\n\n");
	return 0;
}
