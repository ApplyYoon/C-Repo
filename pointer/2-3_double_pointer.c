#include <stdio.h>

int main(void) {
    int a = 10;
    int *p = &a;   // p는 a의 주소를 저장
    int **pp = &p; // pp는 p의 주소를 저장 (포인터를 가리키는 포인터)

    printf("a의 값: %d\n", a);
    printf("p가 가리키는 값(*p): %d\n", *p);
    printf("pp가 가리키는 값(**pp): %d\n", **pp);

    printf("\n--- 주소 관계 ---\n");
    printf("&a  (a의 주소): %p\n", (void*)&a);
    printf("p   (a의 주소 저장): %p\n", (void*)p);
    printf("&p  (p의 주소): %p\n", (void*)&p);
    printf("pp  (p의 주소 저장): %p\n", (void*)pp);

    return 0;
}