#include <stdio.h>

int main(void) {
    int a = 10;
    int *p = &a;

    printf("변수 a의 값: %d\n", a);
    printf("변수 a의 주소: %p\n", (void*)&a);
    printf("포인터 p의 값(=a의 주소): %p\n", (void*)p);
    printf("*p의 값(=a가 가르키는 실제 값): %d\n", *p);

    // 포인터를 통해 원본 변수 수정
    *p = 20;
    printf("\n*p = 20 수행 후 a의 값: %d\n", a);
    return 0;
}