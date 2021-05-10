#include<stdio.h>
#include<stdlib.h>
#define swap(type,x,y) do {type t=x;x=y;y=t;} while(0)

void bubble(int a[],int n){
    int i,j;
    int exchg=0;
    for(i=0;i<n-1;i++){
        exchg=0;
        for(j=n-1;j>i;j--){
            if(a[j-1]>a[j]){
                swap(int,a[j-1],a[j]);
                exchg++;
            }
        }
        if(exchg==0){
            break;
        }
    }
}

int main(void){
    int i,nx;
    int *x;

    puts("bubble order.");
    printf("How many: ");
    scanf("%d",&nx);

    x=calloc(nx,sizeof(int));

    for(i=0;i<nx;i++){
        printf("x[%d] : ",i+1);
        scanf("%d",&x[i]);
    }
    bubble(x,nx);

    puts("lower to higher.");
    for(i=0;i<nx;i++){
        printf("x[%d] = %d\n",i,x[i]);
    }
    free(x);

    return 0;
}