#include<stdio.h>
//total days in a month depends of leap year
int mdays[][12]={
    {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31,30,31,30,31}
};

//leap year check
int isleap(int year){
    return year%4==0&&year%100!=0||year%400==0;
}

//year month days how much passed

int dayofyear(int y, int m, int d){
    int i;
    int days = d;
    for(i=1;i<m;i++){
        days += mdays[isleap(y)][i-1];
    }
    return days;
}

int main(void){
    int year,month,day;
    int retry;
    do{
        printf("year : ");
        scanf("%d",&year);
        printf("month : ");
        scanf("%d",&month);
        printf("day : ");
        scanf("%d",&day);

        printf("%dyear's %ddays passed.\n",year,dayofyear(year,month,day));
        printf("retry? yes - 1 no - 0");
        scanf("%d",&retry);
    }while(retry==1);
    return 0;
}