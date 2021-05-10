#include<stdlib.h>
#include<stdio.h>

int int_cmpr(const int *a,const int *b){
    if(*a<*b){
        return 1;
    }
    else if(*a>*b){
        return -1;
    }
    else{
        return 0;
    }
}

int main(void){
    int i,nx,ky;
    int* x;
    int* p;
    puts("using bsearch to find element");
    printf("How many do you want?: ");
    scanf("%d",&nx);
    x = calloc(nx,sizeof(int));
    printf("higher to lower:\n");
    printf("x[0]: ");
    scanf("%d",&x[0]);
    for(i=1;i<nx;i++){
        do{
            printf("x[%d]: ",i);
            scanf("%d",&x[i]);
        }while(x[i]>x[i-1]);
    }
    printf("searching num: ");
    scanf("%d",&ky);
    p = bsearch(&ky,x,nx,sizeof(int),(int(*)(const void *, const void *))int_cmpr);
    if(p==NULL){
        puts("failed");
    }
    else{
        printf("%d is at x[%d].\n",ky,(int)(p-x));
    }
    free(x);
    return 0;
}