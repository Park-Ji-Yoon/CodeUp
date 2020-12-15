/*아스키(ASCII, 미국표준코드, American Standard Code for Information Interchange) 코드표는 영문자, 특수문자 등을 사용할 때 사용하는 표준 코드이다.

컴퓨터로 저장되는 모든 데이터는 2진 정수화되어 저장되는데, 영문자와 특수기호 등을 저장하는 방법으로 아스키코드를 일반적으로 사용한다.

예를 들어 영문 대문자 'A'는 10진수 65에 해당하는 2진수 값으로 저장된다.*/
#include <stdio.h>
void main(void)
{
    char a;
    printf("");
    scanf("%c",&a);
    printf("%d",a);
}
