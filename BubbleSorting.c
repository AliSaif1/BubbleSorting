#include<stdio.h>
#include<stdlib.h>
#define size 10

void bubbleSort(int arr[]);
void bubbleSort2(int arr[]);

int main(){
    int arr[size] = {12, 56, 76, 2, 89, 59, 90, 45, 3, 23};
    bubbleSort2(arr);
    for(int i = 0; i < size; i++)
        printf("%d\t", arr[i]);
}
void bubbleSort(int arr[]){
    int temp;
    for(int i = 0; i < size-1; i++){
        for(int j = 0; j < size-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
void bubbleSort2(int arr[]){
    int temp;
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
