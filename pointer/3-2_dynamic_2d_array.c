#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int rows = 3;
    int cols = 4;

    // 1단계: '행 포인터들'을 담을 공간 할당
    int **arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL) {
        printf("행 포인터 메모리 할당 실패\n");
        return 1;
    }

    // 2단계: 각 행에 실제 데이터(열) 공간을 할당
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            printf("열 포인터 메모리 할당 실패 (행 %d)\n", i);
            return 1;
        }
    }

    // 3단계: 값 저장
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = i * cols + j; // 0,1,2,3,4,5,...
        }
    }

    // 4단계: 출력
    printf("2차원 배열 출력:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%2d ", arr[i][j]);
        }
        printf("\n");
    }

    // 5단계: 메모리 해제
    for (int i = 0; i < rows; i++) {
        free(arr[i]); // 각 행 해제
    }
    free(arr); // 행 포인터 배열 해제

    return 0;
}