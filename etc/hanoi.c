#include<stdio.h>

void move(int no,int x,int y){
    if(no>1){
        move(no-1,x,6-x-y);
    }
    printf("disk[%d]is moved to %d bar to %d bar.\n",no,x,y);
    if(no>1){
        move(no-1,6-x-y,x);
    }
}

int main(void){
    int n;
    printf("how many disks?: ");
    scanf("%d",&n);
    move(n,1,3);

    return 0;
}