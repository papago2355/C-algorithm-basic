#define _CRT_SECURE_NO_WARNINGS     // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일
#include <string.h> //strlen 사용
#include <ctype.h> //isdigit isalpha 사용
int main()
{
    int ch1;
    char *s1 = malloc(sizeof(char) * 10);    // char 10개 크기만큼 동적 메모리 할당
    int i,n,sum1=0,sum2=0;
    scanf("%s", s1);      // 표준 입력을 받아서 메모리가 할당된 문자열 포인터에 저장

    printf("%s\n", s1);   // 문자열의 내용을 출력
    for(i=0;i<strlen(s1);i++){
       ch1 = *(s1+i); //배열의 요소값을 가지는 ch1
       if(isalpha(ch1)){ // ch1이 알파벳인지 검사
           sum1 = sum1+ch1;
       }
       else if(isdigit(ch1)){ // ch1이 숫자인지 검사
           sum2 = sum2 + ch1 -48; // '0'의 ascii값은 48이다. 48을빼 sum2에 저장
       }
    }
    printf("sum of Ascii numbers(alphabet): %d\n",sum1);
    printf("sum of Ascii numbers(digits): %d",sum2);
    free(s1);    // 동적 메모리 해제

    return 0;
}