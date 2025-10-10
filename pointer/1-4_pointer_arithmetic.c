#include <stdio.h>

int main(void) {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr;  

    printf("--- 초기 상태 ---\n");
    printf("p: %p, *p: %d\n", (void*)p, *p);

    printf("\n--- 포인터 이동 ---\n");
    for (int i = 0; i < 5; i++) {
        printf("p + %d 의 주소: %p, 값: %d\n",
               i, (void*)(p + i), *(p + i));
    }

    printf("\n--- p++ 사용 ---\n");
    p = arr; // 다시 첫 원소로 초기화
    while (p < arr + 5) {  // arr + 5 == &arr[5]
        printf("*p: %d (주소: %p)\n", *p, (void*)p);
        p++;  // 다음 원소로 이동
    }

    return 0;
}