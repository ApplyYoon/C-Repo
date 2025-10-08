#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char *name;  // 문자열을 동적으로 저장할 포인터
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

    // 1. 구조체 배열 동적 생성
    Student *students = calloc(n, sizeof(Student));
    if (students == NULL) {
        fprintf(stderr, "메모리 할당 실패\n");
        return 1;
    }

    // 입력 버퍼 정리용
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}

    // 2. 각 구조체의 name 멤버도 개별 동적 할당
    for (int i = 0; i < n; i++) {
        char buffer[100];

        printf("\n[%d번째 학생]\n", i + 1);
        printf("이름: ");
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            fprintf(stderr, "입력 오류\n");
            return 1;
        }
        buffer[strcspn(buffer, "\n")] = '\0'; // 개행 제거

        students[i].name = malloc(strlen(buffer) + 1);
        if (students[i].name == NULL) {
            fprintf(stderr, "이름 메모리 할당 실패\n");
            return 1;
        }
        strcpy(students[i].name, buffer);

        printf("나이: ");
        scanf("%d", &students[i].age);

        printf("점수: ");
        scanf("%lf", &students[i].score);

        while ((c = getchar()) != '\n' && c != EOF) {} // 버퍼 정리
    }

    // 3. 출력
    printf("\n=== 학생 정보 ===\n");
    for (int i = 0; i < n; i++) {
        printf("이름: %-10s | 나이: %2d | 점수: %.1f\n",
               students[i].name, students[i].age, students[i].score);
    }

    // 4. 개별 name 메모리 해제 + 구조체 배열 해제
    for (int i = 0; i < n; i++) {
        free(students[i].name);
        students[i].name = NULL;
    }
    free(students);
    students = NULL;

    return 0;
}