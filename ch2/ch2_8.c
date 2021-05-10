#include<stdio.h>

int card_convr(unsigned x, int n, char d[]){
    char dchar[] = "0123456789ABCEFGHIJKLMNOPQRSTUVWXYZ";
    int digits=0;
    if(x==0){
        d[digits++] = dchar[0];
    }
    else{
        while(x){
            d[digits++]=dchar[x%n];
            x /= n;
        }
    }
    return digits;
}

int main(void){
    int i;
    unsigned no; 
    int cd;// 16 or 8 or more
    int dno;//digit number
    char cno[512];
    int retry;
    puts("10 based number convert.");
    do{
        printf("a number that is not negative(2-36): ");
        scanf("%d",&cd);
        do{
            printf("what type do you want to conver?(2-36) : ");
            scanf("%d",&cd);
        }while(cd<2||cd>36);
        dno = card_convr(no,cd,cno);
        printf("%dbased number",cd);
        for(i=dno-1;i>=0;i--){
            printf("%c",cno[i]);
        }
        printf("is this\n");
        printf("do it again? 1-yes 0-no: ");
        scanf("%d",&retry);
    }while(retry==1);
    return 0;
}