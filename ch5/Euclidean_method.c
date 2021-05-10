#include<stdio.h>

int gcd(int x,int y){ //this is a Euclidean_method
    if(y==0){
        return x;
    }
    else{
        return gcd(y,x%y);
    }
}

int main(void){
    int x,y;
    puts("put two numbers.");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("%d is what you need.",gcd(x,y));
    return 0;
}