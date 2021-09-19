#include<stdio.h>

int* sort();

int main(){
    int arr[] = {1,2,4,593,29,19,0};
    sort(arr);
}

int* sort(int* arr){
    printf("`arr` is: %d\n", arr);
    printf("`*arr` is %d\n", *arr);
    printf("`&arr` is %d\n", &arr);
    printf("`arr[0]` is %d\n", arr[0]);
    // printf("`*arr[0]` is %d\n", *arr[0]); /// not possible
    printf("`&arr[0]` is %d\n", &arr[0]);
}
