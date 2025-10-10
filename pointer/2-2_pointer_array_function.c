#include <stdio.h>

// 함수 선언
void printArray(int arr[], int size);
void doubleArray(int *arr, int size);

int main(void) {
    int nums[5] = {10, 20, 30, 40, 50};

    printf("초기 배열 값:\n");
    printArray(nums, 5);

    doubleArray(nums, 5);

    printf("\n함수 호출 후 (배열 2배 처리):\n");
    printArray(nums, 5);

    return 0;
}

// 배열(=포인터) 내용 출력
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 배열(=포인터)을 이용해 원본 수정
void doubleArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;  // = *(arr + i)
    }
}