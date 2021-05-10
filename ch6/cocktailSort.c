#include<stdio.h>
#include<stdlib.h>
#define swap(type,x,y) do {type t=x;x=y;y=t;} while(0)

void cocktail(int a[],int n){
    int i,j;
    int start=0,end=n-1,swapped=1;

    while(swapped){
        swapped=0;
        for(i=start;i<end;i++){
            if (a[i] > a[i + 1]) { 
                swap(int, a[i],a[i+1]); 
                swapped = 1; 
            }
        }
        if(!swapped){
            break;
        }
        swapped=0;
        end--;
        for (int i = end - 1; i >= start; --i) { 
            if (a[i] > a[i + 1]) { 
                swap(int,a[i], a[i + 1]); 
                swapped = 1; 
            } 
        }
        start++;
    }
}

void printArray(int a[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        printf("%d ", a[i]); 
    printf("\n"); 
}

int main() 
{ 
    int arr[] = { 5, 1, 4, 2, 8, 0, 2 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cocktail(arr, n); 
    printf("Sorted array :\n"); 
    printArray(arr, n); 
    return 0; 
}