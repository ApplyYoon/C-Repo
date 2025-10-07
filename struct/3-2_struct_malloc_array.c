#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    int age;
    double score;
} Student;

int main(void) {
    int n;

    printf("학생 수 입력: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "잘못된 입력입니다.\n");
        return 1;
    }

    // 1. 구조체 배열 동적 할당
    Student *students = malloc(sizeof(Student) * n);
    if (students == NULL) {
        fprintf(stderr, "메모리 할당 실패\n");
        return 1;
    }

    // 2. 학생 정보 입력
    for (int i = 0; i < n; i++) {
        printf("\n[%d번째 학생]\n", i + 1);
        printf("이름: ");
        scanf("%s", students[i].name);

        printf("나이: ");
        scanf("%d", &students[i].age);

        printf("점수: ");
        scanf("%lf", &students[i].score);
    }

    // 3. 평균 계산
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        printf("이름: %-10s | 나이: %2d | 점수: %.1f\n",
               students[i].name, students[i].age, students[i].score);
        sum += students[i].score;
    }

    printf("\n평균 점수: %.2f\n", sum / n);

    // 4. 메모리 해제
    free(students);
    students = NULL;

    return 0;
}