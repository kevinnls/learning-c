#include<stdio.h>
#include<stdlib.h>

int* sort(int*, int);

int main(){
    int arr[] = {1,2,4,593,29,19,0};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr_len);
    printf("\n");
    return EXIT_SUCCESS;
}

int* sort(int* arr, int length){

    printf("length of array to be sorted: %d\n", length);
    printf("elements of array to be sorted: ");
    for(int i=0; i<length; i++){
	if(i!=0) printf(", ");
	printf("%d", arr[i]);
    }

    return arr;
}
