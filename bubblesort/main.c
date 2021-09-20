#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "../_headers/debug.h"

int* sort(int*, int);
void swap(int*, int, int);
void integeriseArgs(int, char**, int*);
int DEBUG;

int main(int argc, char** argv){

    int arr[argc-1];

    integeriseArgs(argc, argv, arr);


    char* _debug = getenv("DEBUG");
    if(_debug)
	DEBUG = !strcmp(_debug,"1");
	//how does this even work???

    //int arr[] = {1,2,3,5,4};
    int arr_len = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr_len);
    printf("sorted array: ");
    for(int i=0; i<arr_len; i++){
	if(i!=0) printf(", ");
	printf("%d", arr[i]);
    }
    printf("\n");
    return EXIT_SUCCESS;
}

int* sort(int* arr, int length){

    if(DEBUG){
	debug_msg("length of array to be sorted: %d\n", length);
	debug_msg("elements of array to be sorted: ");
	for(int i=0; i<length; i++){
	    debug_msg("%s%d", i==0?"":", ",arr[i]);
	}
	debug_msg("\n");
    }

    int changes = 0;
    do {
	changes = 0;
	for(int i=0; i<length-1; i++){
	    if(arr[i]>arr[i+1]){
		if(DEBUG) debug_msg("need to swap [%d]->%d and [%d]->%d\n",i,arr[i],i+1,arr[i+1]);
		swap(arr, i, i+1);
		++changes;
	    }
	}
    } while (changes != 0);

    if(DEBUG){
	debug_msg("=====\nelement post-sort are: ");
	for(int i=0; i<length; i++){
	    debug_msg("%s%d", i==0?"":", ",arr[i]);
	}
	debug_msg("\n");
    }

    return arr;
}
void swap(int* arr, int left, int right){
    if(DEBUG)
	debug_msg("PRESWAP left[%d] is: %d; right[%d] is %d\n", left,arr[left],right,arr[right]);
    int _hold = arr[left];
    arr[left] = arr[right];
    arr[right] = _hold;
    if(DEBUG)
	debug_msg("POSTSWAP left[%d] is: %d; right[%d] is %d\n", left,arr[left],right,arr[right]);
}

void integeriseArgs(int len, char** args, int* arr_ptr){
    for(int i=1; i<len ; i++){
	arr_ptr[i-1] = atoi(args[i]);
    }
}
