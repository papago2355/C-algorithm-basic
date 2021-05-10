#include<stdio.h>
#include "IntStack.h"
#pragma warning(disable:4996)
int main(void){
    IntStack s;
    if(Initialize(&s,64)==-1){
        puts("Stack made failed!");
        return 1;
    }
    while(1){
        int menu,x;
        printf("current data numbers: %d / %d\n",Size(&s),Capacity(&s));
        printf("(1)Push (2)Pop (3)Peek (4)Print (0)End : ");
        scanf("%d",&menu);

        if(menu==0){
            break;
        }
        switch (menu)
        {
        case 1:
            printf("data: ");
            scanf("%d",&x);
            if(Push(&s,x)==-1){
                puts("Push failed");
            }
            break;
        case 2:
            if(Pop(&s,&x)==-1){
                puts("Pop failed");
            }
            else{
                printf("Popped data is %d\n",x);
            }
            break;
        case 3:
            if(Peek(&s,&x)==-1){
                puts("\aFailed: Peek failed");
            }
            else{
                printf("Peeked data is %d\n",x);
            }
            break;
        case 4:
            Print(&s);
            break;
        default:
            break;
        }
    }
    Terminate(&s);
    return 0;
}