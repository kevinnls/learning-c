#include<stdio.h>

int* sort(int*,int);

int main(){
    int arr[] = {1,2,4,593,29,19,0};
    sort(arr, sizeof(arr)/sizeof(arr[0]));
}

int* sort(int* arr, int length){
    printf("%d", length);
    return arr;
}
