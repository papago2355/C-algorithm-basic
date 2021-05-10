//sentinel method: add answer at the and of array
#include<stdio.h>
#include<stdlib.h>

int search(int a[],int n,int key){
    int i=0;
    a[n] = key;
    while(1){
        if(a[i]==key){
            break;
        }
        i++;
    }
    return i == n ? -1 : i;
}

int main(void){
    int i,nx,ky,idx;
    int *x;
    puts("linear(sentinel method)");
    printf("How many?: ");
    scanf("%d",&nx);
    x = calloc(nx+1,sizeof(int)); //sentinel method
    for(i=0;i<nx;i++){
        printf("x[%d]: ",i);
        scanf("%d",&x[i]);
    }
    printf("search num: ");
    scanf("%d",&ky);
    idx = search(x,nx,ky);
    if(idx==-1){
        puts("failed");
    }
    else{
        printf("%d is in x[%d]\n",ky,idx);
    }
    free(x);

    return 0;
}