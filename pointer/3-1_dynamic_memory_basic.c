#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p;

    p = (int *)malloc(sizeof(int));
    if (p == NULL) { 
        printf("메모리 할당 실패\n");
        return 1;
    }
    
    *p = 42;
    printf("동적 메모리에 저장된 값: %d\n", *p);
    printf("p가 가리키는 주소: %p\n", (void*)p);

    free(p);
    p = NULL;

    return 0;
}