#include <stdio.h>

int main(void) {
    int a = 10;
    double b = 3.14;
    char c = 'Y';

    printf("변수 a의 값: %d\n", a);
    printf("변수 b의 값: %.2f\n", b);
    printf("변수 c의 값: %c\n", c);

    printf("\n--- 메모리 주소 ---\n");
    printf("a의 주소: %p\n", (void*)&a);
    printf("b의 주소: %p\n", (void*)&b);
    printf("c의 주소: %p\n", (void*)&c);

    return 0;
}