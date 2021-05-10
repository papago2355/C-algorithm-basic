//things show random variables
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int maxof(const int a[],int n){
    int i;
    int max = a[0];
    for(i = 1;i<n;i++){
        if(a[i]>max){
            max= a[i];
        }
    }
    return max;
}

int main(void){
    int i;
    int *height;
    int number;
    printf("How many people?: ");
    scanf("%d",&number);
    height = calloc(number,sizeof(int));
    srand(time(NULL));
    for(i=0;i<number;i++){
        height[i] = 100 + rand()%90;
        printf("height[%d]=%d\n",i+1,height[i]);
    }
}