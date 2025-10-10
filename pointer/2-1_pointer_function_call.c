#include <stdio.h>

// 함수 선언
void swap_by_value(int a, int b);
void swap_by_reference(int *a, int *b);

int main(void) {
    int x = 10, y = 20;

    printf("초기 값: x = %d, y = %d\n", x, y);

    // Call by Value (값 전달)
    swap_by_value(x, y);
    printf("값 전달 후: x = %d, y = %d\n", x, y);

    // Call by Reference (참조 전달)
    swap_by_reference(&x, &y);
    printf("참조 전달 후: x = %d, y = %d\n", x, y);

    return 0;
}

// 값 전달: 복사된 값만 전달됨
void swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("[함수 내부] swap_by_value: a=%d, b=%d\n", a, b);
}

// 참조 전달: 실제 주소를 전달함
void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("[함수 내부] swap_by_reference: *a=%d, *b=%d\n", *a, *b);
}