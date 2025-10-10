#include <stdio.h>
#include <stdlib.h>

// 포인터를 함수 안에서 변경하기
void allocateMemory(int **ptr) {
    *ptr = (int *)malloc(sizeof(int)); // 메모리 할당
    if (*ptr == NULL) {
        printf("메모리 할당 실패\n");
        exit(1);
    }
    **ptr = 42; // 할당된 메모리 안에 값 저장
}

int main(void) {
    int *p = NULL;

    allocateMemory(&p); // p의 주소를 전달 (int **)
    printf("함수 호출 후 *p의 값: %d\n", *p);

    free(p); // 반드시 해제
    return 0;
}