#include<stdio.h>
//show decimal
int main(void){
    int i,n;
    int prime[500];
    int ptr=0;
    unsigned long counter =0;
    prime[ptr++] = 2;
    prime[ptr++] = 3;
    for(n=5;n<=1000;n+=2){//only do for odd numbers
        int flag = 0;
        for(i=1;counter++,prime[i]*prime[i]<=n;i++){
            counter++;
            if(n%prime[i]==0){
                flag = 1;
                break;
            }
        }
        if(!flag){
            prime[ptr++] = n;
        }
    }
    for(i=0;i<ptr;i++){
        printf("%d\n",prime[i]);
    }
    printf("total workout number: %lu\n",counter);
    return 0;
}