//using bsearch to find stuff in a struct
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char name[20];
    int height;
    int weight;
}Person;

int npcmp(const Person *x, const Person *y){
    return strcmp(x->name,y->name);
}

int main(void){
    Person x[] = {
        {"ParkHyun",162,79},
        {"HamJin",173,63},
        {"ChoiYun",175,55},
        {"HongYuun",171,68},
        {"LeeSueJin",168,78},
        {"Kimyungjun",174,92},
        {"ParkYoung",169,56}
    };
    int nx = sizeof(x)/sizeof(x[0]);
    int retry;
    puts("search by name: ");
    do{
        Person temp, *p;
        printf("name: ");
        scanf("%s",temp.name);
        p = bsearch(&temp,x,nx,sizeof(Person),(int(*)(const void *,const void *))npcmp);
        if(p==NULL){
            puts("failed");
        }
        else{
            puts("Completed. We find one.");
            printf("x[%d] : %s %dcm %dkg\n",(int)(p-x),p->name,p->height,p->weight);
        }
        printf("try again? 1-yes 0-no:");
        scanf("%d",&retry);
    }while(retry==1);
}