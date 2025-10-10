#include <stdio.h>

int main(void){
    int arr[5] = {10, 20, 30, 40, 50};
    int *p = arr; // 배열의 이름은 첫 번째 원소의 주소와 같다.(&arr[0])
    
    printf("arr[0] = %d\n", arr[0]);
    printf("*p = %d\n", *p);

    printf("\n--주소 비교--\n");
    printf("arr 자체의 주소(= 첫 번째 원소 주소): %p\n", (void*)arr);
    printf("&arr[0]: %p\n", (void*)&arr[0]);
    printf("p: %p\n", (void*)p);

    printf("\n--- 포인터로 배열 순회 ---\n");
    for (int i = 0; i < 5; i++) {
        printf("p + %d -> 값: %d\n", i, *(p + i));
    }
    
    return 0;
}